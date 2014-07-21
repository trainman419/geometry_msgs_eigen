# geometry\_msgs\_eigen

A proof-of-concept for subscribing and publishing native types directly in ROS

## Setup

Check this package out into your catkin workspace and build it with `catkin_make`

## Demo

This package contains two simple demo programs:

`eigen_pub` publishes directly from an `Eigen::Vector3d` onto the `/point` topic.

`eigen_sub` subscribes directly to `Eigen::Vector3d` objects on the `/point` topic.

In both cases, the API is identical to the normal ROS api, except the geometry\_msgs\_eigen/Point.h header is used instead of the normal geometry\_msgs/Point.h header, and native Eigen types are used instead of ROS message types.

To test compatibility with other ROS nodes, simply run `eigen_pub` and `rostopic echo /point`.
