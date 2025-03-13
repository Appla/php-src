#ifndef ZEND_OPCACHE_API_PUB_H
#define ZEND_OPCACHE_API_PUB_H
#include <time.h>
#include "zend_types.h"

#ifdef PHP_WIN32
# define KB_OPCACHE_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
# define KB_OPCACHE_API __attribute__ ((visibility("default")))
#else
# define KB_OPCACHE_API
#endif

BEGIN_EXTERN_C()

KB_OPCACHE_API time_t opcache_update_request_time(time_t ts);
KB_OPCACHE_API zend_result opcache_accel_active(int flags);
#ifndef ZTS
KB_OPCACHE_API const void *opcache_get_zcg_ref(void);
#endif  //NTS

END_EXTERN_C()

#endif // ZEND_OPCACHE_API_PUB_H