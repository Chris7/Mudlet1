/***************************************************************************
 *   Copyright (C) 2008-2009 by Heiko Koehn   *
 *   KoehnHeiko@googlemail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "TTreeWidget.h"
#include <QtGui>
#include "Host.h"
#include "HostManager.h"
#include "TDebug.h"
#include "luaInterface.h"

TTreeWidget::TTreeWidget( QWidget * pW ) : QTreeWidget( pW )
{
    setSelectionMode( QAbstractItemView::SingleSelection );
    setSelectionBehavior( QAbstractItemView::SelectRows );
    setDragEnabled( true );
    setAcceptDrops( true );
    setDropIndicatorShown( true );
    viewport()->setAcceptDrops( true );
    setDragDropMode( QAbstractItemView::InternalMove );
    mIsDropAction = false;
    mpHost = 0;
    mOldParentID = 0;

    mIsTriggerTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsAliasTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = false;
}

void TTreeWidget::setIsVarTree()
{
    mIsAliasTree = false;
    mIsTriggerTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = true;
}

void TTreeWidget::setIsAliasTree()
{
    mIsAliasTree = true;
    mIsTriggerTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = false;
}

void TTreeWidget::setIsTriggerTree()
{
    mIsTriggerTree = true;
    mIsAliasTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = false;
}

void TTreeWidget::setIsActionTree()
{
    mIsTriggerTree = false;
    mIsAliasTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsKeyTree = false;
    mIsActionTree = true;
    mIsVarTree = false;
}

void TTreeWidget::setIsKeyTree()
{
    mIsTriggerTree = false;
    mIsAliasTree = false;
    mIsScriptTree = false;
    mIsTimerTree = false;
    mIsActionTree = false;
    mIsKeyTree = true;
    mIsVarTree = false;
}

void TTreeWidget::setIsTimerTree()
{
    mIsTimerTree = true;
    mIsTriggerTree = false;
    mIsScriptTree = false;
    mIsAliasTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = false;
}

void TTreeWidget::setIsScriptTree()
{
    mIsScriptTree = true;
    mIsTriggerTree = false;
    mIsAliasTree = false;
    mIsTimerTree = false;
    mIsActionTree = false;
    mIsKeyTree = false;
    mIsVarTree = false;
}

void TTreeWidget::setHost( Host * pH )
{
    mpHost = pH;
}

void TTreeWidget::rowsAboutToBeRemoved( const QModelIndex & parent, int start, int end )
{
    oldModel = parent;
    if( parent.isValid() )
    {
        mOldParentID = parent.data( Qt::UserRole ).toInt();
    }
    else
        mOldParentID = 0;

    if( mOldParentID == 0 )
    {
        mOldParentID = parent.sibling( start, 0 ).data( Qt::UserRole ).toInt();
    }

    if( parent.isValid() )
    {
        QModelIndex child = parent.child( start, 0 );
        mChildID = child.data( Qt::UserRole ).toInt();
        if( mChildID == 0 )
        {
            if( parent.isValid() )
            {
                child = parent.model()->index( start, 0, QModelIndex() );
            }
            if( child.isValid() )
            {
                mChildID = child.data( Qt::UserRole ).toInt();
            }
            else
                mChildID = 0;
        }
    }
    //QTreeWidget::rowsAboutToBeRemoved( parent, start, end );
}

void TTreeWidget::recurseVarTree(QTreeWidgetItem * pItem, QMap<QString, QTreeWidgetItem *> &varList){
    QStringList itemInfo = pItem->data(0, Qt::UserRole).toStringList();
    QString varName;
    int itemType = itemInfo[1].toInt();
    for (int i=3;i<itemInfo.size();i++){
        varName+=itemInfo[i];
    }
    if (itemType != LUA_TTABLE){
        varName+=itemInfo[0]+pItem->text(0);
    }
    varList.insert(varName, pItem);
    for(int i=0;i<pItem->childCount();++i)
        recurseVarTree(pItem->child(i), varList);
}


void TTreeWidget::rowsInserted( const QModelIndex & parent, int start, int end )
{
    // determine position in parent list

    if( mIsDropAction )
    {
        QModelIndex child = parent.child( start, 0 );
        int parentPosition = parent.row();
        int childPosition = child.row();
        if( mChildID == 0 )
        {
            if( ! parent.model() ) goto END;
            if( ! mpHost ) goto END;
            mChildID = parent.model()->index( start, 0 ).data( Qt::UserRole ).toInt();
        }
        int newParentID = parent.data( Qt::UserRole ).toInt();
        if (mIsVarTree){
            //mpHost->reParentTrigger( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
            QTreeWidgetItem * newpItem = itemFromIndex(parent);
            QTreeWidgetItem * cItem = itemFromIndex(child);
            QTreeWidgetItem * oldpItem = itemFromIndex(oldModel);
            //qDebug()<<newpItem->data(0, Qt::UserRole).toStringList();
            //qDebug()<<cItem->data(0, Qt::UserRole).toStringList();
            if (!oldpItem)
                return;
            //qDebug()<<oldpItem->data(0, Qt::UserRole).toStringList();
            QStringList oldInfo = oldpItem->data(0, Qt::UserRole).toStringList();
            QStringList oldRoot;
            for (int i=3;i<oldInfo.size();i++){
                if (oldInfo[i] != "")
                    oldRoot << oldInfo[i];
            }
            QStringList newInfo = newpItem->data(0, Qt::UserRole).toStringList();
            QStringList newRoot;
            for (int i=3;i<newInfo.size();i++){
                if (newInfo[i] != "")
                    newRoot << newInfo[i];
            }
            //delete everything from cItem
            luaInterface * lI = new luaInterface(mpHost);
            QString dName = cItem->text(0);
            QStringList itemInfo = cItem->data(0, Qt::UserRole).toStringList();
            QString varName;
            QMap<QString, QTreeWidgetItem *> varsToChange;
            int itemType = itemInfo[1].toInt();
            for (int i=3;i<itemInfo.size();i++){
                varName+=itemInfo[i];
            }
            if (itemType != LUA_TTABLE){
                varName+=itemInfo[0]+cItem->text(0);
            }
            recurseVarTree(cItem, varsToChange);
            qDebug()<<varsToChange;
            lI->deleteVar(cItem,dName);
            QMapIterator<QString, QTreeWidgetItem *> it(varsToChange);
            while (it.hasNext()){
                it.next();
                qDebug()<<it.key();
                QTreeWidgetItem * pI = it.value();
                //lI->deleteVar(pI,pI->text(0));
                QStringList itemInfo = pI->data(0, Qt::UserRole).toStringList();
                QStringList newItemInfo;
                newItemInfo = itemInfo;
                for (int i=0;i<oldRoot.size();i++){
                    newItemInfo.removeAt(3+i);
                }
                for (int i=0;i<newRoot.size();i++){
                    newItemInfo.insert(3+i,newRoot[i]);
                }
               // if (newItemInfo[1].toInt() == LUA_TTABLE)
                 //   newItemInfo.removeLast();
                //qDebug()<<itemInfo;
                //qDebug()<<newItemInfo;
                qDebug()<<pI->text(0);
                pI->setData(0, Qt::UserRole, newItemInfo);
                newItemInfo.prepend(pI->text(0));
                //lI->saveVar(pI, pI->text(0), newItemInfo[2],1);
                lI->restoreVar(newItemInfo);
                if (mpHost->savedVariables.contains(it.key())){
                    mpHost->savedVariables.remove(it.key());
                    varName = "";
                    int itemType = newItemInfo[1].toInt();
                    for (int i=3;i<newItemInfo.size();i++){
                        varName+=newItemInfo[i];
                    }
                    if (itemType != LUA_TTABLE){
                        varName+=newItemInfo[0]+pI->text(0);
                    }
                    mpHost->savedVariables.insert(varName, pI);
                }
            }
            qDebug()<<"OLD TEST"<<oldpItem->text(0);
        }
        if( mIsTriggerTree )
            mpHost->getTriggerUnit()->reParentTrigger( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
        if( mIsAliasTree )
            mpHost->getAliasUnit()->reParentAlias( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
        if( mIsKeyTree )
            mpHost->getKeyUnit()->reParentKey( mChildID, mOldParentID, newParentID, parentPosition, childPosition );

        if( mIsTimerTree )
        {
            mpHost->getTimerUnit()->reParentTimer( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
            TTimer * pTChild = mpHost->getTimerUnit()->getTimer( mChildID );
            //TTimer * pTnewParent = mpHost->getTimerUnit()->getTimer( newParentID );
            if( pTChild )
            {
                QIcon icon;
                if( pTChild->isOffsetTimer() )
                {
                    if( pTChild->shouldBeActive() )
                    {
                        icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/offsettimer-on.png")), QIcon::Normal, QIcon::Off);
                    }
                    else
                    {
                        icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/offsettimer-off.png")), QIcon::Normal, QIcon::Off);
                    }
                }
                else
                {
                    if( pTChild->shouldBeActive() )
                    {
                        icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/tag_checkbox_checked.png")), QIcon::Normal, QIcon::Off);
                    }
                    else
                    {
                        icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/tag_checkbox.png")), QIcon::Normal, QIcon::Off);
                    }
                }
                QTreeWidgetItem * pParent = itemFromIndex( parent );
                if( ! pParent ) goto END;
                for( int i=0; i<pParent->childCount(); i++ )
                {
                    QTreeWidgetItem * pItem = pParent->child(i);
                    if( ! pItem ) goto END;
                    int id = pItem->data(0, Qt::UserRole).toInt();
                    if( id == mChildID )
                    {
                        pItem->setIcon(0, icon);
                    }
                }
            }
        }
        if( mIsScriptTree )
            mpHost->getScriptUnit()->reParentScript( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
        if( mIsActionTree )
        {
            mpHost->getActionUnit()->reParentAction( mChildID, mOldParentID, newParentID, parentPosition, childPosition );
            mpHost->getActionUnit()->updateToolbar();
        }

        mChildID = 0;
        mOldParentID = 0;
        mIsDropAction = false;
    }
    END: QTreeWidget::rowsInserted( parent, start, end );
}

Qt::DropActions TTreeWidget::supportedDropActions() const
{
    return Qt::MoveAction;
}


void TTreeWidget::dragEnterEvent(QDragEnterEvent *event)
{
    mIsDropAction = true;
    QTreeWidget::dragEnterEvent( event );
}

void TTreeWidget::dropEvent(QDropEvent *event)
{
    QTreeWidgetItem * pItem = itemAt( event->pos() );

    if( ! pItem )
    {
        event->setDropAction( Qt::IgnoreAction );
        event->ignore();
    }

    if( pItem == topLevelItem(0) )
    {
        if( (dropIndicatorPosition() == QAbstractItemView::AboveItem )
         || (dropIndicatorPosition() == QAbstractItemView::BelowItem ) )
        {
            event->setDropAction( Qt::IgnoreAction );
            event->ignore();
        }
    }
    mIsDropAction = true;
    QTreeWidget::dropEvent( event );
    return;
}

void TTreeWidget::beginInsertRows ( const QModelIndex & parent, int first, int last )
{
}

void TTreeWidget::dragMoveEvent( QDragMoveEvent * e )
{
    QTreeWidget::dragMoveEvent( e );
}

void TTreeWidget::startDrag( Qt::DropActions supportedActions )
{
    QTreeWidget::startDrag( supportedActions );
}

bool TTreeWidget::dropMimeData ( QTreeWidgetItem * parent, int index, const QMimeData * data, Qt::DropAction action )
{
    return QTreeWidget::dropMimeData( parent, index, data, action );
}


