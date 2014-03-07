#include <uuid/uuid.h>

#define GUID_STRLEN       36+1
#define SHORT_GUID_STRLEN 22+1

typedef struct {

  uuid_t uu;

} lib_uuid_t;
