/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/msg/ApplyForceDebug.msg */
#ifndef OWD_MSGS_MESSAGE_APPLYFORCEDEBUG_H
#define OWD_MSGS_MESSAGE_APPLYFORCEDEBUG_H
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
struct ApplyForceDebug_ {
  typedef ApplyForceDebug_<ContainerAllocator> Type;

  ApplyForceDebug_()
  : forcetorque_in()
  , torques_out()
  , forcetorque_out()
  , scale(0.0)
  {
  }

  ApplyForceDebug_(const ContainerAllocator& _alloc)
  : forcetorque_in(_alloc)
  , torques_out(_alloc)
  , forcetorque_out(_alloc)
  , scale(0.0)
  {
  }

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _forcetorque_in_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  forcetorque_in;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _torques_out_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  torques_out;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _forcetorque_out_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  forcetorque_out;

  typedef double _scale_type;
  double scale;


  typedef boost::shared_ptr< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::ApplyForceDebug_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ApplyForceDebug
typedef  ::owd_msgs::ApplyForceDebug_<std::allocator<void> > ApplyForceDebug;

typedef boost::shared_ptr< ::owd_msgs::ApplyForceDebug> ApplyForceDebugPtr;
typedef boost::shared_ptr< ::owd_msgs::ApplyForceDebug const> ApplyForceDebugConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::owd_msgs::ApplyForceDebug_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::ApplyForceDebug_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> > {
  static const char* value() 
  {
    return "77adec8a3a327e7c4151bc3bc97e55db";
  }

  static const char* value(const  ::owd_msgs::ApplyForceDebug_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x77adec8a3a327e7cULL;
  static const uint64_t static_value2 = 0x4151bc3bc97e55dbULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/ApplyForceDebug";
  }

  static const char* value(const  ::owd_msgs::ApplyForceDebug_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64[] forcetorque_in\n\
float64[] torques_out\n\
float64[] forcetorque_out\n\
float64 scale\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::ApplyForceDebug_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.forcetorque_in);
    stream.next(m.torques_out);
    stream.next(m.forcetorque_out);
    stream.next(m.scale);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ApplyForceDebug_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::owd_msgs::ApplyForceDebug_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::owd_msgs::ApplyForceDebug_<ContainerAllocator> & v) 
  {
    s << indent << "forcetorque_in[]" << std::endl;
    for (size_t i = 0; i < v.forcetorque_in.size(); ++i)
    {
      s << indent << "  forcetorque_in[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.forcetorque_in[i]);
    }
    s << indent << "torques_out[]" << std::endl;
    for (size_t i = 0; i < v.torques_out.size(); ++i)
    {
      s << indent << "  torques_out[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.torques_out[i]);
    }
    s << indent << "forcetorque_out[]" << std::endl;
    for (size_t i = 0; i < v.forcetorque_out.size(); ++i)
    {
      s << indent << "  forcetorque_out[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.forcetorque_out[i]);
    }
    s << indent << "scale: ";
    Printer<double>::stream(s, indent + "  ", v.scale);
  }
};


} // namespace message_operations
} // namespace ros

#endif // OWD_MSGS_MESSAGE_APPLYFORCEDEBUG_H

