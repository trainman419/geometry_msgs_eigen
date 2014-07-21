#include <geometry_msgs_eigen/Point.h>
#include <ros/ros.h>

int main(int argc, char ** argv) {
  ros::init(argc, argv, "eigen_pub");

  ros::NodeHandle n;

  ros::Publisher eigen_pub = n.advertise<Eigen::Vector3d>("point", 1);

  ros::Rate loop_rate(1);

  Eigen::Vector3d point(1.0, 0.5, 0.25);

  while(ros::ok()) {
    point.x() += 0.1;
    eigen_pub.publish(point);
    loop_rate.sleep();
  }
}
