/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/srv/InsertKey.srv */
#ifndef OWD_MSGS_SERVICE_INSERTKEY_H
#define OWD_MSGS_SERVICE_INSERTKEY_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace owd_msgs
{
template <class ContainerAllocator>
struct InsertKeyRequest_ {
  typedef InsertKeyRequest_<ContainerAllocator> Type;

  InsertKeyRequest_()
  {
  }

  InsertKeyRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::InsertKeyRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct InsertKeyRequest
typedef  ::owd_msgs::InsertKeyRequest_<std::allocator<void> > InsertKeyRequest;

typedef boost::shared_ptr< ::owd_msgs::InsertKeyRequest> InsertKeyRequestPtr;
typedef boost::shared_ptr< ::owd_msgs::InsertKeyRequest const> InsertKeyRequestConstPtr;



template <class ContainerAllocator>
struct InsertKeyResponse_ {
  typedef InsertKeyResponse_<ContainerAllocator> Type;

  InsertKeyResponse_()
  : ok(false)
  , reason()
  , id(0)
  {
  }

  InsertKeyResponse_(const ContainerAllocator& _alloc)
  : ok(false)
  , reason(_alloc)
  , id(0)
  {
  }

  typedef uint8_t _ok_type;
  uint8_t ok;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  reason;

  typedef uint32_t _id_type;
  uint32_t id;


  typedef boost::shared_ptr< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::InsertKeyResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct InsertKeyResponse
typedef  ::owd_msgs::InsertKeyResponse_<std::allocator<void> > InsertKeyResponse;

typedef boost::shared_ptr< ::owd_msgs::InsertKeyResponse> InsertKeyResponsePtr;
typedef boost::shared_ptr< ::owd_msgs::InsertKeyResponse const> InsertKeyResponseConstPtr;


struct InsertKey
{

typedef InsertKeyRequest Request;
typedef InsertKeyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct InsertKey
} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::InsertKeyRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::owd_msgs::InsertKeyRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/InsertKeyRequest";
  }

  static const char* value(const  ::owd_msgs::InsertKeyRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::owd_msgs::InsertKeyRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::InsertKeyResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ad2e2c70d0557970f2c1628f5539a6dd";
  }

  static const char* value(const  ::owd_msgs::InsertKeyResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xad2e2c70d0557970ULL;
  static const uint64_t static_value2 = 0xf2c1628f5539a6ddULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/InsertKeyResponse";
  }

  static const char* value(const  ::owd_msgs::InsertKeyResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ok\n\
string reason\n\
uint32 id\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::InsertKeyResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::InsertKeyRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct InsertKeyRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::InsertKeyResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ok);
    stream.next(m.reason);
    stream.next(m.id);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct InsertKeyResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<owd_msgs::InsertKey> {
  static const char* value() 
  {
    return "ad2e2c70d0557970f2c1628f5539a6dd";
  }

  static const char* value(const owd_msgs::InsertKey&) { return value(); } 
};

template<>
struct DataType<owd_msgs::InsertKey> {
  static const char* value() 
  {
    return "owd_msgs/InsertKey";
  }

  static const char* value(const owd_msgs::InsertKey&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::InsertKeyRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ad2e2c70d0557970f2c1628f5539a6dd";
  }

  static const char* value(const owd_msgs::InsertKeyRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::InsertKeyRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/InsertKey";
  }

  static const char* value(const owd_msgs::InsertKeyRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::InsertKeyResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ad2e2c70d0557970f2c1628f5539a6dd";
  }

  static const char* value(const owd_msgs::InsertKeyResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::InsertKeyResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/InsertKey";
  }

  static const char* value(const owd_msgs::InsertKeyResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // OWD_MSGS_SERVICE_INSERTKEY_H

