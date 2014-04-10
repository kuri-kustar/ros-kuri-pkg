/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/srv/SetExtraMass.srv */
#ifndef OWD_MSGS_SERVICE_SETEXTRAMASS_H
#define OWD_MSGS_SERVICE_SETEXTRAMASS_H
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

#include "owd_msgs/MassProperties.h"



namespace owd_msgs
{
template <class ContainerAllocator>
struct SetExtraMassRequest_ {
  typedef SetExtraMassRequest_<ContainerAllocator> Type;

  SetExtraMassRequest_()
  : m()
  {
  }

  SetExtraMassRequest_(const ContainerAllocator& _alloc)
  : m(_alloc)
  {
  }

  typedef  ::owd_msgs::MassProperties_<ContainerAllocator>  _m_type;
   ::owd_msgs::MassProperties_<ContainerAllocator>  m;


  typedef boost::shared_ptr< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetExtraMassRequest
typedef  ::owd_msgs::SetExtraMassRequest_<std::allocator<void> > SetExtraMassRequest;

typedef boost::shared_ptr< ::owd_msgs::SetExtraMassRequest> SetExtraMassRequestPtr;
typedef boost::shared_ptr< ::owd_msgs::SetExtraMassRequest const> SetExtraMassRequestConstPtr;



template <class ContainerAllocator>
struct SetExtraMassResponse_ {
  typedef SetExtraMassResponse_<ContainerAllocator> Type;

  SetExtraMassResponse_()
  : ok(false)
  , reason()
  {
  }

  SetExtraMassResponse_(const ContainerAllocator& _alloc)
  : ok(false)
  , reason(_alloc)
  {
  }

  typedef uint8_t _ok_type;
  uint8_t ok;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  reason;


  typedef boost::shared_ptr< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetExtraMassResponse
typedef  ::owd_msgs::SetExtraMassResponse_<std::allocator<void> > SetExtraMassResponse;

typedef boost::shared_ptr< ::owd_msgs::SetExtraMassResponse> SetExtraMassResponsePtr;
typedef boost::shared_ptr< ::owd_msgs::SetExtraMassResponse const> SetExtraMassResponseConstPtr;


struct SetExtraMass
{

typedef SetExtraMassRequest Request;
typedef SetExtraMassResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetExtraMass
} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "711c76cfdcaf7366f06dc155d98f60d1";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x711c76cfdcaf7366ULL;
  static const uint64_t static_value2 = 0xf06dc155d98f60d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetExtraMassRequest";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/MassProperties m\n\
\n\
================================================================================\n\
MSG: owd_msgs/MassProperties\n\
uint8 link\n\
float64 mass\n\
float64 cog_x\n\
float64 cog_y\n\
float64 cog_z\n\
float64 inertia_xx\n\
float64 inertia_xy\n\
float64 inertia_xz\n\
float64 inertia_yy\n\
float64 inertia_yz\n\
float64 inertia_zz\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4679398f882e7cbdea165980d3ec2888";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4679398f882e7cbdULL;
  static const uint64_t static_value2 = 0xea165980d3ec2888ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetExtraMassResponse";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool ok\n\
string reason\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::SetExtraMassRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.m);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetExtraMassRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::SetExtraMassResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.ok);
    stream.next(m.reason);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetExtraMassResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<owd_msgs::SetExtraMass> {
  static const char* value() 
  {
    return "6e56e849d39ef37144de532715dc61f9";
  }

  static const char* value(const owd_msgs::SetExtraMass&) { return value(); } 
};

template<>
struct DataType<owd_msgs::SetExtraMass> {
  static const char* value() 
  {
    return "owd_msgs/SetExtraMass";
  }

  static const char* value(const owd_msgs::SetExtraMass&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::SetExtraMassRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6e56e849d39ef37144de532715dc61f9";
  }

  static const char* value(const owd_msgs::SetExtraMassRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::SetExtraMassRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetExtraMass";
  }

  static const char* value(const owd_msgs::SetExtraMassRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::SetExtraMassResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6e56e849d39ef37144de532715dc61f9";
  }

  static const char* value(const owd_msgs::SetExtraMassResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::SetExtraMassResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/SetExtraMass";
  }

  static const char* value(const owd_msgs::SetExtraMassResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // OWD_MSGS_SERVICE_SETEXTRAMASS_H

