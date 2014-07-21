// adapter class for subscribing to Points as Eigen objects
// Author: Austin Hendrix

#ifndef GEOMETRY_MSGS_EIGEN__POINT
#define GEOMETRY_MSGS_EIGEN__POINT

#include <geometry_msgs/Point.h>
#include <Eigen/Core>

namespace ros {
  namespace message_traits {
    template<> struct IsFixedSize< ::Eigen::Vector3d > : TrueType {};
    template<> struct IsFixedSize< ::Eigen::Vector3d const > : TrueType {};

    template<> struct IsMessage< ::Eigen::Vector3d > : FalseType {};
    template<> struct IsMessage< ::Eigen::Vector3d const > : FalseType {};

    template<> struct HasHeader< ::Eigen::Vector3d > : FalseType {};
    template<> struct HasHeader< ::Eigen::Vector3d const > : FalseType {};

    template<> struct MD5Sum< ::Eigen::Vector3d > : ::ros::message_traits::MD5Sum< ::geometry_msgs::Point > {
      static const char* value(const ::Eigen::Vector3d &) { return value(); }
      static const char* value() {
        return ::ros::message_traits::MD5Sum< ::geometry_msgs::Point >::value();
      }
    };

    template<> struct DataType< ::Eigen::Vector3d > : ::ros::message_traits::DataType< ::geometry_msgs::Point > {
      static const char* value(const ::Eigen::Vector3d &) { return value(); }
      static const char* value() {
        return ::ros::message_traits::DataType< ::geometry_msgs::Point >::value();
      }
    };
    template<> struct Definition< ::Eigen::Vector3d > : ::ros::message_traits::Definition< ::geometry_msgs::Point > {};
  }
}

namespace ros {
  namespace serialization {
    template<> struct Serializer< ::Eigen::Vector3d > {
      template<typename Stream, typename T> inline static void allInOne(Stream &stream, T m)
      {
        stream.next(m.x());
        stream.next(m.y());
        stream.next(m.z());
      }

      ROS_DECLARE_ALLINONE_SERIALIZER;
    };
  }
}
#endif
