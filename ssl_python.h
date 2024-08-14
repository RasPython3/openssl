
#ifndef OSSL_PYTHON_H
# define OSSL_PYTHON_H
# ifdef WITH_PYTHON
#  define gmtime _gmtime_ignore
#  define localtime _localtime_ignore
#  define asctime _asctime_ignore
#  define mktime _mktime_ignore
#  define tm _tm_ignore
#  include <time.h>
#  undef gmtime
#  undef localtime
#  undef asctime
#  undef mktime
#  undef tm
#  include "pyconfig.h"
#  define _STAT_DEFINED
#  define _TM_DEFINED
# endif
#endif
