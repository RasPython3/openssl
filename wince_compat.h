#ifndef WINCE_COMPAT_H
#define WINCE_COMPAT_H

#define perror(txt)

#define RegisterEventSourceW(servername, sourcename) NULL
#define DeregisterEventSource(evlog) 0
#define ReportEventW(evlog, type, category, evid, userid, numstr, size, str, raw) 0

#define GetProcessWindowStation() NULL

#define GetUserObjectInformationW(hobj, index, info, len, lenneeded) 0
#endif