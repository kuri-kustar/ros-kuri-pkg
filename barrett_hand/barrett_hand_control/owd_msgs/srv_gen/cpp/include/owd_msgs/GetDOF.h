/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/srv/GetDOF.srv */
#ifndef OWD_MSGS_SERVICE_GETDOF_H
#define OWD_MSGS_SERVICE_GETDOF_H
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
struct GetDOFRequest_ {
  typedef GetDOFRequest_<ContainerAllocator> Type;

  GetDOFRequest_()
  {
  }

  GetDOFRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::GetDOFRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetDOFRequest
typedef  ::owd_msgs::GetDOFRequest_<std::allocator<void> > GetDOFRequest;

typedef boost::shared_ptr< ::owd_msgs::GetDOFRequest> GetDOFRequestPtr;
typedef boost::shared_ptr< ::owd_msgs::GetDOFRequest const> GetDOFRequestConstPtr;



template <class ContainerAllocator>
struct GetDOFResponse_ {
  typedef GetDOFResponse_<ContainerAllocator> Type;

  GetDOFResponse_()
  : nDOF(0)
  {
  }

  GetDOFResponse_(const ContainerAllocator& _alloc)
  : nDOF(0)
  {
  }

  typedef uint32_t _nDOF_type;
  uint32_t nDOF;


  typedef boost::shared_ptr< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::GetDOFResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetDOFResponse
typedef  ::owd_msgs::GetDOFResponse_<std::allocator<void> > GetDOFResponse;

typedef boost::shared_ptr< ::owd_msgs::GetDOFResponse> GetDOFResponsePtr;
typedef boost::shared_ptr< ::owd_msgs::GetDOFResponse const> GetDOFResponseConstPtr;


struct GetDOF
{

typedef GetDOFRequest Request;
typedef GetDOFResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetDOF
} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::GetDOFRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::owd_msgs::GetDOFRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/GetDOFRequest";
  }

  static const char* value(const  ::owd_msgs::GetDOFRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::owd_msgs::GetDOFRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::GetDOFRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::GetDOFResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28965d9e0d5ec6fa5ecf9e0da0bee01d";
  }

  static const char* value(const  ::owd_msgs::GetDOFResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x28965d9e0d5ec6faULL;
  static const uint64_t static_value2 = 0x5ecf9e0da0bee01dULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/GetDOFResponse";
  }

  static const char* value(const  ::owd_msgs::GetDOFResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint32 nDOF\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::GetDOFResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::GetDOFResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::GetDOFRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetDOFRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::GetDOFResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.nDOF);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetDOFResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<owd_msgs::GetDOF> {
  static const char* value() 
  {
    return "28965d9e0d5ec6fa5ecf9e0da0bee01d";
  }

  static const char* value(const owd_msgs::GetDOF&) { return value(); } 
};

template<>
struct DataType<owd_msgs::GetDOF> {
  static const char* value() 
  {
    return "owd_msgs/GetDOF";
  }

  static const char* value(const owd_msgs::GetDOF&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::GetDOFRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28965d9e0d5ec6fa5ecf9e0da0bee01d";
  }

  static const char* value(const owd_msgs::GetDOFRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::GetDOFRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/GetDOF";
  }

  static const char* value(const owd_msgs::GetDOFRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd_msgs::GetDOFResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28965d9e0d5ec6fa5ecf9e0da0bee01d";
  }

  static const char* value(const owd_msgs::GetDOFResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd_msgs::GetDOFResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/GetDOF";
  }

  static const char* value(const owd_msgs::GetDOFResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // OWD_MSGS_SERVICE_GETDOF_H

