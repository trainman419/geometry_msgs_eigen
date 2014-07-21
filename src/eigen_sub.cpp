#include <geometry_msgs_eigen/Point.h>
#include <ros/ros.h>

void msgCallback( const Eigen::Vector3d & msg ) {
  ROS_INFO("Got Eigen Vector3d: (%f, %f, %f)", msg.x(), msg.y(), msg.z());
}

int main(int argc, char ** argv) {
  ros::init(argc, argv, "eigen_sub");
  ros::NodeHandle n;

  ros::Subscriber eigen_sub = n.subscribe("point", 10, msgCallback);

  ros::spin();

  return 0;
}
