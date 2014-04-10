/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/msg/Joints.msg */
#ifndef OWD_MSGS_MESSAGE_JOINTS_H
#define OWD_MSGS_MESSAGE_JOINTS_H
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
struct Joints_ {
  typedef Joints_<ContainerAllocator> Type;

  Joints_()
  : j()
  {
  }

  Joints_(const ContainerAllocator& _alloc)
  : j(_alloc)
  {
  }

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _j_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  j;


  typedef boost::shared_ptr< ::owd_msgs::Joints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::Joints_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Joints
typedef  ::owd_msgs::Joints_<std::allocator<void> > Joints;

typedef boost::shared_ptr< ::owd_msgs::Joints> JointsPtr;
typedef boost::shared_ptr< ::owd_msgs::Joints const> JointsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::owd_msgs::Joints_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::owd_msgs::Joints_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::Joints_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::Joints_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::Joints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "59542e81b1fd2eaee58892b9055022e8";
  }

  static const char* value(const  ::owd_msgs::Joints_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x59542e81b1fd2eaeULL;
  static const uint64_t static_value2 = 0xe58892b9055022e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::Joints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/Joints";
  }

  static const char* value(const  ::owd_msgs::Joints_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::Joints_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64[] j\n\
\n\
";
  }

  static const char* value(const  ::owd_msgs::Joints_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::Joints_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.j);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Joints_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::owd_msgs::Joints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::owd_msgs::Joints_<ContainerAllocator> & v) 
  {
    s << indent << "j[]" << std::endl;
    for (size_t i = 0; i < v.j.size(); ++i)
    {
      s << indent << "  j[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.j[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // OWD_MSGS_MESSAGE_JOINTS_H
