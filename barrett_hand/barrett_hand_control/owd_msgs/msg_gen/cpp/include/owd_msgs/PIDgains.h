/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/msg/PIDgains.msg */
#ifndef OWD_MSGS_MESSAGE_PIDGAINS_H
#define OWD_MSGS_MESSAGE_PIDGAINS_H
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


namespace owd_msgs
{
template <class ContainerAllocator>
struct PIDgains_ {
  typedef PIDgains_<ContainerAllocator> Type;

  PIDgains_()
  : kp(0.0)
  , kd(0.0)
  , ki(0.0)
  {
  }

  PIDgains_(const ContainerAllocator& _alloc)
  : kp(0.0)
  , kd(0.0)
  , ki(0.0)
  {
  }

  typedef double _kp_type;
  double kp;

  typedef double _kd_type;
  double kd;

  typedef double _ki_type;
  double ki;


  typedef boost::shared_ptr< ::owd_msgs::PIDgains_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::PIDgains_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PIDgains
typedef  ::owd_msgs::PIDgains_<std::allocator<void> > PIDgains;

typedef boost::shared_ptr< ::owd_msgs::PIDgains> PIDgainsPtr;
typedef boost::shared_ptr< ::owd_msgs::PIDgains const> PIDgainsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::owd_msgs::PIDgains_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::owd_msgs::PIDgains_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::PIDgains_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::PIDgains_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::PIDgains_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e87782bd839ad4d19186c03a29ec1538";
  }

  static const char* value(const  ::owd_msgs::PIDgains_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe87782bd839ad4d1ULL;
  static const uint64_t static_value2 = 0x9186c03a29ec1538ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::PIDgains_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/PIDgains";
  }

  static const char* value(const  ::owd_msgs::PIDgains_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::PIDgains_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 kp\n\
float64 kd\n\
float64 ki\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::PIDgains_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::PIDgains_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::PIDgains_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.kp);
    stream.next(m.kd);
    stream.next(m.ki);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PIDgains_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::owd_msgs::PIDgains_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::owd_msgs::PIDgains_<ContainerAllocator> & v) 
  {
    s << indent << "kp: ";
    Printer<double>::stream(s, indent + "  ", v.kp);
    s << indent << "kd: ";
    Printer<double>::stream(s, indent + "  ", v.kd);
    s << indent << "ki: ";
    Printer<double>::stream(s, indent + "  ", v.ki);
  }
};


} // namespace message_operations
} // namespace ros

#endif // OWD_MSGS_MESSAGE_PIDGAINS_H

