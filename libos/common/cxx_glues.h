#define new _new
#define delete _delete
#define private _private
#define class _class
#define typename _typename
#define catch _catch
#define false _false
#define true _true
#define namespace _namespace
#define this _this
#define export _export

#define const
#define volatile

#define notrace
#define asmlinkage

#define STRUCT_INIT(type, member, val) ({       \
    type var; \
    var.member = val; \
    var; })

#if 0
// BITFIELD(sock, sk_state, sk_shutdown, 3)
#define BITFIELD(type, uni, field, len) \
    ((uni).x & ({struct type t; t.(uni).(field) = len; t.(uni).x;})
#endif
