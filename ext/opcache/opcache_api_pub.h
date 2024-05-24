#ifndef ZEND_OPCACHE_API_PUB_H
#define ZEND_OPCACHE_API_PUB_H
#include <zend.h>

BEGIN_EXTERN_C()
ZEND_API time_t opcache_update_request_time(time_t tm);
#ifndef ZTS
ZEND_API void *opcache_get_zcg_ref();
#endif  //NTS

END_EXTERN_C()

#endif // ZEND_OPCACHE_API_PUB_H