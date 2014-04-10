/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/srv/SetStallSensitivity.srv */
#ifndef OWD_MSGS_SERVICE_SETSTALLSENSITIVITY_H
#define OWD_MSGS_SERVICE_SETSTALLSENSITIVITY_H
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
struct SetStallSensitivityRequest_ {
  typedef SetStallSensitivityRequest_<ContainerAllocator> Type;

  SetStallSensitivityRequest_()
  : level(0.0)
  {
  }

  SetStallSensitivityRequest_(const ContainerAllocator& _alloc)
  : level(0.0)
  {
  }

  typedef float _level_type;
  float level;


  typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetStallSensitivityRequest
typedef  ::owd_msgs::SetStallSensitivityRequest_<std::allocator<void> > SetStallSensitivityRequest;

typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityRequest> SetStallSensitivityRequestPtr;
typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityRequest const> SetStallSensitivityRequestConstPtr;



template <class ContainerAllocator>
struct SetStallSensitivityResponse_ {
  typedef SetStallSensitivityResponse_<ContainerAllocator> Type;

  SetStallSensitivityResponse_()
  : ok(false)
  , reason()
  {
  }

  SetStallSensitivityResponse_(const ContainerAllocator& _alloc)
  : ok(false)
  , reason(_alloc)
  {
  }

  typedef uint8_t _ok_type;
  uint8_t ok;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  reason;


  typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetStallSensitivityResponse
typedef  ::owd_msgs::SetStallSensitivityResponse_<std::allocator<void> > SetStallSensitivityResponse;

typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityResponse> SetStallSensitivityResponsePtr;
typedef boost::shared_ptr< ::owd_msgs::SetStallSensitivityResponse const> SetStallSensitivityResponseConstPtr;


struct SetStallSensitivity
{

typedef SetStallSensitivityRequest Request;
typedef SetStallSensitivityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetStallSensitivity
} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "480b3e33acc20b8f29c6011b379fbc8b";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x480b3e33acc20b8fULL;
  static const uint64_t static_value2 = 0x29c6011b379fbc8bULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetStallSensitivityRequest";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 level\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4679398f882e7cbdea165980d3ec2888";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4679398f882e7cbdULL;
  static const uint64_t static_value2 = 0xea165980d3ec2888ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetStallSensitivityResponse";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ok\n\
string reason\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.level);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetStallSensitivityRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ok);
    stream.next(m.reason);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetStallSensitivityResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<owd_msgs::SetStallSensitivity> {
  static const char* value() 
  {
    return "3685a1efa11fe96ad3aa679fdfb06569";
  }

  static const char* value(const owd_msgs::SetStallSensitivity&) { return value(); } 
};

template<>
struct DataType<owd_msgs::SetStallSensitivity> {
  static const char* value() 
  {
    return "owd_msgs/SetStallSensitivity";
  }

  static const char* value(const owd_msgs::SetStallSensitivity&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3685a1efa11fe96ad3aa679fdfb06569";
  }

  static const char* value(const owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetStallSensitivity";
  }

  static const char* value(const owd_msgs::SetStallSensitivityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3685a1efa11fe96ad3aa679fdfb06569";
  }

  static const char* value(const owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetStallSensitivity";
  }

  static const char* value(const owd_msgs::SetStallSensitivityResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // OWD_MSGS_SERVICE_SETSTALLSENSITIVITY_H
