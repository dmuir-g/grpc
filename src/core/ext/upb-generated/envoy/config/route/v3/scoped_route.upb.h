/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/scoped_route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_
#define ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_route_v3_ScopedRouteConfiguration;
struct envoy_config_route_v3_ScopedRouteConfiguration_Key;
struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration envoy_config_route_v3_ScopedRouteConfiguration;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration_Key envoy_config_route_v3_ScopedRouteConfiguration_Key;
typedef struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment;
extern const upb_msglayout envoy_config_route_v3_ScopedRouteConfiguration_msginit;
extern const upb_msglayout envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit;
extern const upb_msglayout envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit;


/* envoy.config.route.v3.ScopedRouteConfiguration */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration *envoy_config_route_v3_ScopedRouteConfiguration_new(upb_arena *arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration *)_upb_msg_new(&envoy_config_route_v3_ScopedRouteConfiguration_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration *envoy_config_route_v3_ScopedRouteConfiguration_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_route_v3_ScopedRouteConfiguration *ret = envoy_config_route_v3_ScopedRouteConfiguration_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_config_route_v3_ScopedRouteConfiguration_serialize(const envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_config_route_v3_ScopedRouteConfiguration_name(const envoy_config_route_v3_ScopedRouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview envoy_config_route_v3_ScopedRouteConfiguration_route_configuration_name(const envoy_config_route_v3_ScopedRouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }
UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_has_key(const envoy_config_route_v3_ScopedRouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_key(const envoy_config_route_v3_ScopedRouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const envoy_config_route_v3_ScopedRouteConfiguration_Key*); }

UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_name(envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_route_configuration_name(envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}
UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_set_key(envoy_config_route_v3_ScopedRouteConfiguration *msg, envoy_config_route_v3_ScopedRouteConfiguration_Key* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), envoy_config_route_v3_ScopedRouteConfiguration_Key*) = value;
}
UPB_INLINE struct envoy_config_route_v3_ScopedRouteConfiguration_Key* envoy_config_route_v3_ScopedRouteConfiguration_mutable_key(envoy_config_route_v3_ScopedRouteConfiguration *msg, upb_arena *arena) {
  struct envoy_config_route_v3_ScopedRouteConfiguration_Key* sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key*)envoy_config_route_v3_ScopedRouteConfiguration_key(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key*)_upb_msg_new(&envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_ScopedRouteConfiguration_set_key(msg, sub);
  }
  return sub;
}

/* envoy.config.route.v3.ScopedRouteConfiguration.Key */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key *envoy_config_route_v3_ScopedRouteConfiguration_Key_new(upb_arena *arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key *)_upb_msg_new(&envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key *envoy_config_route_v3_ScopedRouteConfiguration_Key_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key *ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_config_route_v3_ScopedRouteConfiguration_Key_serialize(const envoy_config_route_v3_ScopedRouteConfiguration_Key *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit, arena, len);
}

UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_Key_has_fragments(const envoy_config_route_v3_ScopedRouteConfiguration_Key *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* const* envoy_config_route_v3_ScopedRouteConfiguration_Key_fragments(const envoy_config_route_v3_ScopedRouteConfiguration_Key *msg, size_t *len) { return (const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment** envoy_config_route_v3_ScopedRouteConfiguration_Key_mutable_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key *msg, size_t *len) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment** envoy_config_route_v3_ScopedRouteConfiguration_Key_resize_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key *msg, size_t len, upb_arena *arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* envoy_config_route_v3_ScopedRouteConfiguration_Key_add_fragments(envoy_config_route_v3_ScopedRouteConfiguration_Key *msg, upb_arena *arena) {
  struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* sub = (struct envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment*)_upb_msg_new(&envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.config.route.v3.ScopedRouteConfiguration.Key.Fragment */

UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_new(upb_arena *arena) {
  return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *)_upb_msg_new(&envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *ret = envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_serialize(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit, arena, len);
}

typedef enum {
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_string_key = 1,
  envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_NOT_SET = 0
} envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases;
UPB_INLINE envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_case(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment* msg) { return (envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(8, 16), int32_t); }

UPB_INLINE bool envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_has_string_key(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 1; }
UPB_INLINE upb_strview envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_string_key(const envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 1, upb_strview_make("", strlen(""))); }

UPB_INLINE void envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_set_string_key(envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 1);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_ROUTE_V3_SCOPED_ROUTE_PROTO_UPB_H_ */
