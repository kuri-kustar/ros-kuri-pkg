/* Auto-generated by genmsg_cpp for file /home/kuri/catkin_ws/src/owd_msgs/msg/MassProperties.msg */
#ifndef OWD_MSGS_MESSAGE_MASSPROPERTIES_H
#define OWD_MSGS_MESSAGE_MASSPROPERTIES_H
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
struct MassProperties_ {
  typedef MassProperties_<ContainerAllocator> Type;

  MassProperties_()
  : link(0)
  , mass(0.0)
  , cog_x(0.0)
  , cog_y(0.0)
  , cog_z(0.0)
  , inertia_xx(0.0)
  , inertia_xy(0.0)
  , inertia_xz(0.0)
  , inertia_yy(0.0)
  , inertia_yz(0.0)
  , inertia_zz(0.0)
  {
  }

  MassProperties_(const ContainerAllocator& _alloc)
  : link(0)
  , mass(0.0)
  , cog_x(0.0)
  , cog_y(0.0)
  , cog_z(0.0)
  , inertia_xx(0.0)
  , inertia_xy(0.0)
  , inertia_xz(0.0)
  , inertia_yy(0.0)
  , inertia_yz(0.0)
  , inertia_zz(0.0)
  {
  }

  typedef uint8_t _link_type;
  uint8_t link;

  typedef double _mass_type;
  double mass;

  typedef double _cog_x_type;
  double cog_x;

  typedef double _cog_y_type;
  double cog_y;

  typedef double _cog_z_type;
  double cog_z;

  typedef double _inertia_xx_type;
  double inertia_xx;

  typedef double _inertia_xy_type;
  double inertia_xy;

  typedef double _inertia_xz_type;
  double inertia_xz;

  typedef double _inertia_yy_type;
  double inertia_yy;

  typedef double _inertia_yz_type;
  double inertia_yz;

  typedef double _inertia_zz_type;
  double inertia_zz;


  typedef boost::shared_ptr< ::owd_msgs::MassProperties_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd_msgs::MassProperties_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MassProperties
typedef  ::owd_msgs::MassProperties_<std::allocator<void> > MassProperties;

typedef boost::shared_ptr< ::owd_msgs::MassProperties> MassPropertiesPtr;
typedef boost::shared_ptr< ::owd_msgs::MassProperties const> MassPropertiesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::owd_msgs::MassProperties_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::owd_msgs::MassProperties_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace owd_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::MassProperties_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd_msgs::MassProperties_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd_msgs::MassProperties_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6902a26aa992b6613972882349b094c7";
  }

  static const char* value(const  ::owd_msgs::MassProperties_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6902a26aa992b661ULL;
  static const uint64_t static_value2 = 0x3972882349b094c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::owd_msgs::MassProperties_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd_msgs/MassProperties";
  }

  static const char* value(const  ::owd_msgs::MassProperties_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd_msgs::MassProperties_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 link\n\
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

  static const char* value(const  ::owd_msgs::MassProperties_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd_msgs::MassProperties_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd_msgs::MassProperties_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.link);
    stream.next(m.mass);
    stream.next(m.cog_x);
    stream.next(m.cog_y);
    stream.next(m.cog_z);
    stream.next(m.inertia_xx);
    stream.next(m.inertia_xy);
    stream.next(m.inertia_xz);
    stream.next(m.inertia_yy);
    stream.next(m.inertia_yz);
    stream.next(m.inertia_zz);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MassProperties_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::owd_msgs::MassProperties_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::owd_msgs::MassProperties_<ContainerAllocator> & v) 
  {
    s << indent << "link: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.link);
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
    s << indent << "cog_x: ";
    Printer<double>::stream(s, indent + "  ", v.cog_x);
    s << indent << "cog_y: ";
    Printer<double>::stream(s, indent + "  ", v.cog_y);
    s << indent << "cog_z: ";
    Printer<double>::stream(s, indent + "  ", v.cog_z);
    s << indent << "inertia_xx: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_xx);
    s << indent << "inertia_xy: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_xy);
    s << indent << "inertia_xz: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_xz);
    s << indent << "inertia_yy: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_yy);
    s << indent << "inertia_yz: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_yz);
    s << indent << "inertia_zz: ";
    Printer<double>::stream(s, indent + "  ", v.inertia_zz);
  }
};


} // namespace message_operations
} // namespace ros

#endif // OWD_MSGS_MESSAGE_MASSPROPERTIES_H

