// Generated by gencpp from file tm_motion/ActionGoal.msg
// DO NOT EDIT!


#ifndef TM_MOTION_MESSAGE_ACTIONGOAL_H
#define TM_MOTION_MESSAGE_ACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tm_motion
{
template <class ContainerAllocator>
struct ActionGoal_
{
  typedef ActionGoal_<ContainerAllocator> Type;

  ActionGoal_()
    : goal_function()
    , goal_param()
    , goal_goal1()
    , goal_goal2()
    , goal_goal3()
    , goal_goal4()
    , goal_goal5()
    , goal_goal6()  {
    }
  ActionGoal_(const ContainerAllocator& _alloc)
    : goal_function(_alloc)
    , goal_param(_alloc)
    , goal_goal1(_alloc)
    , goal_goal2(_alloc)
    , goal_goal3(_alloc)
    , goal_goal4(_alloc)
    , goal_goal5(_alloc)
    , goal_goal6(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_function_type;
  _goal_function_type goal_function;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_param_type;
  _goal_param_type goal_param;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal1_type;
  _goal_goal1_type goal_goal1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal2_type;
  _goal_goal2_type goal_goal2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal3_type;
  _goal_goal3_type goal_goal3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal4_type;
  _goal_goal4_type goal_goal4;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal5_type;
  _goal_goal5_type goal_goal5;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_goal6_type;
  _goal_goal6_type goal_goal6;





  typedef boost::shared_ptr< ::tm_motion::ActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tm_motion::ActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ActionGoal_

typedef ::tm_motion::ActionGoal_<std::allocator<void> > ActionGoal;

typedef boost::shared_ptr< ::tm_motion::ActionGoal > ActionGoalPtr;
typedef boost::shared_ptr< ::tm_motion::ActionGoal const> ActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tm_motion::ActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tm_motion::ActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tm_motion

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'tm_motion': ['/home/tthmatt/Omron-TM-ROS/devel/.private/tm_motion/share/tm_motion/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tm_motion::ActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_motion::ActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_motion::ActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_motion::ActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_motion::ActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_motion::ActionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tm_motion::ActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdea93a608d7ca728e6127b539a20557";
  }

  static const char* value(const ::tm_motion::ActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdea93a608d7ca72ULL;
  static const uint64_t static_value2 = 0x8e6127b539a20557ULL;
};

template<class ContainerAllocator>
struct DataType< ::tm_motion::ActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tm_motion/ActionGoal";
  }

  static const char* value(const ::tm_motion::ActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tm_motion::ActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"string goal_function\n"
"string goal_param\n"
"string goal_goal1\n"
"string goal_goal2\n"
"string goal_goal3\n"
"string goal_goal4\n"
"string goal_goal5\n"
"string goal_goal6\n"
"\n"
;
  }

  static const char* value(const ::tm_motion::ActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tm_motion::ActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal_function);
      stream.next(m.goal_param);
      stream.next(m.goal_goal1);
      stream.next(m.goal_goal2);
      stream.next(m.goal_goal3);
      stream.next(m.goal_goal4);
      stream.next(m.goal_goal5);
      stream.next(m.goal_goal6);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tm_motion::ActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tm_motion::ActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "goal_function: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_function);
    s << indent << "goal_param: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_param);
    s << indent << "goal_goal1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal1);
    s << indent << "goal_goal2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal2);
    s << indent << "goal_goal3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal3);
    s << indent << "goal_goal4: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal4);
    s << indent << "goal_goal5: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal5);
    s << indent << "goal_goal6: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_goal6);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TM_MOTION_MESSAGE_ACTIONGOAL_H