/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_nebula_2eproto__INCLUDED
#define PROTOBUF_C_nebula_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Nebula__NebulaMsg Nebula__NebulaMsg;


/* --- enums --- */


/* --- messages --- */

struct  _Nebula__NebulaMsg
{
  ProtobufCMessage base;
  char *msgid;
  protobuf_c_boolean has_body;
  ProtobufCBinaryData body;
};
#define NEBULA__NEBULA_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&nebula__nebula_msg__descriptor) \
    , NULL, 0,{0,NULL} }


/* Nebula__NebulaMsg methods */
void   nebula__nebula_msg__init
                     (Nebula__NebulaMsg         *message);
size_t nebula__nebula_msg__get_packed_size
                     (const Nebula__NebulaMsg   *message);
size_t nebula__nebula_msg__pack
                     (const Nebula__NebulaMsg   *message,
                      uint8_t             *out);
size_t nebula__nebula_msg__pack_to_buffer
                     (const Nebula__NebulaMsg   *message,
                      ProtobufCBuffer     *buffer);
Nebula__NebulaMsg *
       nebula__nebula_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   nebula__nebula_msg__free_unpacked
                     (Nebula__NebulaMsg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Nebula__NebulaMsg_Closure)
                 (const Nebula__NebulaMsg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor nebula__nebula_msg__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_nebula_2eproto__INCLUDED */
