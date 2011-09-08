/****************************************************************************
** Meta object code from reading C++ file 'irc.h'
**
** Created: Mon Sep 5 20:10:48 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../irc/include/irc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'irc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Irc__Rfc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       9, 0x0,  138,   18,

 // enum data: key, value
      17, uint(Irc::Rfc::RPL_WELCOME),
      29, uint(Irc::Rfc::RPL_YOURHOST),
      42, uint(Irc::Rfc::RPL_CREATED),
      54, uint(Irc::Rfc::RPL_MYINFO),
      65, uint(Irc::Rfc::RPL_BOUNCE),
      76, uint(Irc::Rfc::RPL_USERHOST),
      89, uint(Irc::Rfc::RPL_ISON),
      98, uint(Irc::Rfc::RPL_AWAY),
     107, uint(Irc::Rfc::RPL_UNAWAY),
     118, uint(Irc::Rfc::RPL_NOWAWAY),
     130, uint(Irc::Rfc::RPL_WHOISUSER),
     144, uint(Irc::Rfc::RPL_WHOISSERVER),
     160, uint(Irc::Rfc::RPL_WHOISOPERATOR),
     178, uint(Irc::Rfc::RPL_WHOISIDLE),
     192, uint(Irc::Rfc::RPL_ENDOFWHOIS),
     207, uint(Irc::Rfc::RPL_WHOISCHANNELS),
     225, uint(Irc::Rfc::RPL_WHOWASUSER),
     240, uint(Irc::Rfc::RPL_ENDOFWHOWAS),
     256, uint(Irc::Rfc::RPL_LIST),
     265, uint(Irc::Rfc::RPL_LISTEND),
     277, uint(Irc::Rfc::RPL_UNIQOPIS),
     290, uint(Irc::Rfc::RPL_CHANNELMODEIS),
     308, uint(Irc::Rfc::RPL_CHANNELURL),
     323, uint(Irc::Rfc::RPL_CHANNELCREATED),
     342, uint(Irc::Rfc::RPL_NOTOPIC),
     354, uint(Irc::Rfc::RPL_TOPIC),
     364, uint(Irc::Rfc::RPL_TOPICSET),
     377, uint(Irc::Rfc::RPL_INVITING),
     390, uint(Irc::Rfc::RPL_SUMMONING),
     404, uint(Irc::Rfc::RPL_INVITELIST),
     419, uint(Irc::Rfc::RPL_ENDOFINVITELIST),
     439, uint(Irc::Rfc::RPL_EXCEPTLIST),
     454, uint(Irc::Rfc::RPL_ENDOFEXCEPTLIST),
     474, uint(Irc::Rfc::RPL_VERSION),
     486, uint(Irc::Rfc::RPL_WHOREPLY),
     499, uint(Irc::Rfc::RPL_ENDOFWHO),
     512, uint(Irc::Rfc::RPL_NAMREPLY),
     525, uint(Irc::Rfc::RPL_ENDOFNAMES),
     540, uint(Irc::Rfc::RPL_LINKS),
     550, uint(Irc::Rfc::RPL_ENDOFLINKS),
     565, uint(Irc::Rfc::RPL_BANLIST),
     577, uint(Irc::Rfc::RPL_ENDOFBANLIST),
     594, uint(Irc::Rfc::RPL_INFO),
     603, uint(Irc::Rfc::RPL_ENDOFINFO),
     617, uint(Irc::Rfc::RPL_MOTDSTART),
     631, uint(Irc::Rfc::RPL_MOTD),
     640, uint(Irc::Rfc::RPL_ENDOFMOTD),
     654, uint(Irc::Rfc::RPL_YOUREOPER),
     668, uint(Irc::Rfc::RPL_REHASHING),
     682, uint(Irc::Rfc::RPL_YOURESERVICE),
     699, uint(Irc::Rfc::RPL_TIME),
     708, uint(Irc::Rfc::RPL_USERSSTART),
     723, uint(Irc::Rfc::RPL_USERS),
     733, uint(Irc::Rfc::RPL_ENDOFUSERS),
     748, uint(Irc::Rfc::RPL_NOUSERS),
     760, uint(Irc::Rfc::RPL_TRACELINK),
     774, uint(Irc::Rfc::RPL_TRACECONNECTING),
     794, uint(Irc::Rfc::RPL_TRACEHANDSHAKE),
     813, uint(Irc::Rfc::RPL_TRACEUNKNOWN),
     830, uint(Irc::Rfc::RPL_TRACEOPERATOR),
     848, uint(Irc::Rfc::RPL_TRACEUSER),
     862, uint(Irc::Rfc::RPL_TRACESERVER),
     878, uint(Irc::Rfc::RPL_TRACESERVICE),
     895, uint(Irc::Rfc::RPL_TRACENEWTYPE),
     912, uint(Irc::Rfc::RPL_TRACECLASS),
     927, uint(Irc::Rfc::RPL_TRACELOG),
     940, uint(Irc::Rfc::RPL_TRACEEND),
     953, uint(Irc::Rfc::RPL_STATSLINKINFO),
     971, uint(Irc::Rfc::RPL_STATSCOMMANDS),
     989, uint(Irc::Rfc::RPL_ENDOFSTATS),
    1004, uint(Irc::Rfc::RPL_STATSUPTIME),
    1020, uint(Irc::Rfc::RPL_STATSOLINE),
    1035, uint(Irc::Rfc::RPL_UMODEIS),
    1047, uint(Irc::Rfc::RPL_SERVLIST),
    1060, uint(Irc::Rfc::RPL_SERVLISTEND),
    1076, uint(Irc::Rfc::RPL_LUSERCLIENT),
    1092, uint(Irc::Rfc::RPL_LUSEROP),
    1104, uint(Irc::Rfc::RPL_LUSERUNKNOWN),
    1121, uint(Irc::Rfc::RPL_LUSERCHANNELS),
    1139, uint(Irc::Rfc::RPL_LUSERME),
    1151, uint(Irc::Rfc::RPL_ADMINME),
    1163, uint(Irc::Rfc::RPL_ADMINLOC1),
    1177, uint(Irc::Rfc::RPL_ADMINLOC2),
    1191, uint(Irc::Rfc::RPL_ADMINEMAIL),
    1206, uint(Irc::Rfc::RPL_TRYAGAIN),
    1219, uint(Irc::Rfc::ERR_NOSUCHNICK),
    1234, uint(Irc::Rfc::ERR_NOSUCHSERVER),
    1251, uint(Irc::Rfc::ERR_NOSUCHCHANNEL),
    1269, uint(Irc::Rfc::ERR_CANNOTSENDTOCHAN),
    1290, uint(Irc::Rfc::ERR_TOOMANYCHANNELS),
    1310, uint(Irc::Rfc::ERR_WASNOSUCHNICK),
    1328, uint(Irc::Rfc::ERR_TOOMANYTARGETS),
    1347, uint(Irc::Rfc::ERR_NOSUCHSERVICE),
    1365, uint(Irc::Rfc::ERR_NOORIGIN),
    1378, uint(Irc::Rfc::ERR_NORECIPIENT),
    1394, uint(Irc::Rfc::ERR_NOTEXTTOSEND),
    1411, uint(Irc::Rfc::ERR_NOTOPLEVEL),
    1426, uint(Irc::Rfc::ERR_WILDTOPLEVEL),
    1443, uint(Irc::Rfc::ERR_BADMASK),
    1455, uint(Irc::Rfc::ERR_UNKNOWNCOMMAND),
    1474, uint(Irc::Rfc::ERR_NOMOTD),
    1485, uint(Irc::Rfc::ERR_NOADMININFO),
    1501, uint(Irc::Rfc::ERR_FILEERROR),
    1515, uint(Irc::Rfc::ERR_NONICKNAMEGIVEN),
    1535, uint(Irc::Rfc::ERR_ERRONEUSNICKNAME),
    1556, uint(Irc::Rfc::ERR_NICKNAMEINUSE),
    1574, uint(Irc::Rfc::ERR_NICKCOLLISION),
    1592, uint(Irc::Rfc::ERR_UNAVAILRESOURCE),
    1612, uint(Irc::Rfc::ERR_USERNOTINCHANNEL),
    1633, uint(Irc::Rfc::ERR_NOTONCHANNEL),
    1650, uint(Irc::Rfc::ERR_USERONCHANNEL),
    1668, uint(Irc::Rfc::ERR_NOLOGIN),
    1680, uint(Irc::Rfc::ERR_SUMMONDISABLED),
    1699, uint(Irc::Rfc::ERR_USERSDISABLED),
    1717, uint(Irc::Rfc::ERR_NOTREGISTERED),
    1735, uint(Irc::Rfc::ERR_NEEDMOREPARAMS),
    1754, uint(Irc::Rfc::ERR_ALREADYREGISTRED),
    1775, uint(Irc::Rfc::ERR_NOPERMFORHOST),
    1793, uint(Irc::Rfc::ERR_PASSWDMISMATCH),
    1812, uint(Irc::Rfc::ERR_YOUREBANNEDCREEP),
    1833, uint(Irc::Rfc::ERR_YOUWILLBEBANNED),
    1853, uint(Irc::Rfc::ERR_KEYSET),
    1864, uint(Irc::Rfc::ERR_CHANNELISFULL),
    1882, uint(Irc::Rfc::ERR_UNKNOWNMODE),
    1898, uint(Irc::Rfc::ERR_INVITEONLYCHAN),
    1917, uint(Irc::Rfc::ERR_BANNEDFROMCHAN),
    1936, uint(Irc::Rfc::ERR_BADCHANNELKEY),
    1954, uint(Irc::Rfc::ERR_BADCHANMASK),
    1970, uint(Irc::Rfc::ERR_NOCHANMODES),
    1986, uint(Irc::Rfc::ERR_BANLISTFULL),
    2002, uint(Irc::Rfc::ERR_NOPRIVILEGES),
    2019, uint(Irc::Rfc::ERR_CHANOPRIVSNEEDED),
    2040, uint(Irc::Rfc::ERR_CANTKILLSERVER),
    2059, uint(Irc::Rfc::ERR_RESTRICTED),
    2074, uint(Irc::Rfc::ERR_UNIQOPPRIVSNEEDED),
    2096, uint(Irc::Rfc::ERR_NOOPERHOST),
    2111, uint(Irc::Rfc::ERR_UMODEUNKNOWNFLAG),
    2132, uint(Irc::Rfc::ERR_USERSDONTMATCH),

       0        // eod
};

static const char qt_meta_stringdata_Irc__Rfc[] = {
    "Irc::Rfc\0Numeric\0RPL_WELCOME\0RPL_YOURHOST\0"
    "RPL_CREATED\0RPL_MYINFO\0RPL_BOUNCE\0"
    "RPL_USERHOST\0RPL_ISON\0RPL_AWAY\0"
    "RPL_UNAWAY\0RPL_NOWAWAY\0RPL_WHOISUSER\0"
    "RPL_WHOISSERVER\0RPL_WHOISOPERATOR\0"
    "RPL_WHOISIDLE\0RPL_ENDOFWHOIS\0"
    "RPL_WHOISCHANNELS\0RPL_WHOWASUSER\0"
    "RPL_ENDOFWHOWAS\0RPL_LIST\0RPL_LISTEND\0"
    "RPL_UNIQOPIS\0RPL_CHANNELMODEIS\0"
    "RPL_CHANNELURL\0RPL_CHANNELCREATED\0"
    "RPL_NOTOPIC\0RPL_TOPIC\0RPL_TOPICSET\0"
    "RPL_INVITING\0RPL_SUMMONING\0RPL_INVITELIST\0"
    "RPL_ENDOFINVITELIST\0RPL_EXCEPTLIST\0"
    "RPL_ENDOFEXCEPTLIST\0RPL_VERSION\0"
    "RPL_WHOREPLY\0RPL_ENDOFWHO\0RPL_NAMREPLY\0"
    "RPL_ENDOFNAMES\0RPL_LINKS\0RPL_ENDOFLINKS\0"
    "RPL_BANLIST\0RPL_ENDOFBANLIST\0RPL_INFO\0"
    "RPL_ENDOFINFO\0RPL_MOTDSTART\0RPL_MOTD\0"
    "RPL_ENDOFMOTD\0RPL_YOUREOPER\0RPL_REHASHING\0"
    "RPL_YOURESERVICE\0RPL_TIME\0RPL_USERSSTART\0"
    "RPL_USERS\0RPL_ENDOFUSERS\0RPL_NOUSERS\0"
    "RPL_TRACELINK\0RPL_TRACECONNECTING\0"
    "RPL_TRACEHANDSHAKE\0RPL_TRACEUNKNOWN\0"
    "RPL_TRACEOPERATOR\0RPL_TRACEUSER\0"
    "RPL_TRACESERVER\0RPL_TRACESERVICE\0"
    "RPL_TRACENEWTYPE\0RPL_TRACECLASS\0"
    "RPL_TRACELOG\0RPL_TRACEEND\0RPL_STATSLINKINFO\0"
    "RPL_STATSCOMMANDS\0RPL_ENDOFSTATS\0"
    "RPL_STATSUPTIME\0RPL_STATSOLINE\0"
    "RPL_UMODEIS\0RPL_SERVLIST\0RPL_SERVLISTEND\0"
    "RPL_LUSERCLIENT\0RPL_LUSEROP\0"
    "RPL_LUSERUNKNOWN\0RPL_LUSERCHANNELS\0"
    "RPL_LUSERME\0RPL_ADMINME\0RPL_ADMINLOC1\0"
    "RPL_ADMINLOC2\0RPL_ADMINEMAIL\0RPL_TRYAGAIN\0"
    "ERR_NOSUCHNICK\0ERR_NOSUCHSERVER\0"
    "ERR_NOSUCHCHANNEL\0ERR_CANNOTSENDTOCHAN\0"
    "ERR_TOOMANYCHANNELS\0ERR_WASNOSUCHNICK\0"
    "ERR_TOOMANYTARGETS\0ERR_NOSUCHSERVICE\0"
    "ERR_NOORIGIN\0ERR_NORECIPIENT\0"
    "ERR_NOTEXTTOSEND\0ERR_NOTOPLEVEL\0"
    "ERR_WILDTOPLEVEL\0ERR_BADMASK\0"
    "ERR_UNKNOWNCOMMAND\0ERR_NOMOTD\0"
    "ERR_NOADMININFO\0ERR_FILEERROR\0"
    "ERR_NONICKNAMEGIVEN\0ERR_ERRONEUSNICKNAME\0"
    "ERR_NICKNAMEINUSE\0ERR_NICKCOLLISION\0"
    "ERR_UNAVAILRESOURCE\0ERR_USERNOTINCHANNEL\0"
    "ERR_NOTONCHANNEL\0ERR_USERONCHANNEL\0"
    "ERR_NOLOGIN\0ERR_SUMMONDISABLED\0"
    "ERR_USERSDISABLED\0ERR_NOTREGISTERED\0"
    "ERR_NEEDMOREPARAMS\0ERR_ALREADYREGISTRED\0"
    "ERR_NOPERMFORHOST\0ERR_PASSWDMISMATCH\0"
    "ERR_YOUREBANNEDCREEP\0ERR_YOUWILLBEBANNED\0"
    "ERR_KEYSET\0ERR_CHANNELISFULL\0"
    "ERR_UNKNOWNMODE\0ERR_INVITEONLYCHAN\0"
    "ERR_BANNEDFROMCHAN\0ERR_BADCHANNELKEY\0"
    "ERR_BADCHANMASK\0ERR_NOCHANMODES\0"
    "ERR_BANLISTFULL\0ERR_NOPRIVILEGES\0"
    "ERR_CHANOPRIVSNEEDED\0ERR_CANTKILLSERVER\0"
    "ERR_RESTRICTED\0ERR_UNIQOPPRIVSNEEDED\0"
    "ERR_NOOPERHOST\0ERR_UMODEUNKNOWNFLAG\0"
    "ERR_USERSDONTMATCH\0"
};

const QMetaObject Irc::Rfc::staticMetaObject = {
    { 0, qt_meta_stringdata_Irc__Rfc,
      qt_meta_data_Irc__Rfc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Irc::Rfc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION
QT_END_MOC_NAMESPACE
