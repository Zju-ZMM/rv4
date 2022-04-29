#include<iostream>
#include <string>
#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <robot_state_publisher/robot_state_publisher.h>
using namespace std;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "rv4_joint_pub");
    ros::NodeHandle n;
    ros::Publisher joint_pub = n.advertise<sensor_msgs::JointState>("joint_states", 1000);
    ros::Rate loop_rate(10);
    sensor_msgs::JointState joint_state;
    while (ros::ok())
    {
        joint_state.header.stamp = ros::Time::now();
        joint_state.name.resize(14);
        joint_state.position.resize(14);
        joint_state.name = ['left_joint1', 'left_joint2', 'left_joint3', 'left_joint4', 'left_joint5', 'left_joint6', 'left_joint7', 
                           'right_joint1', 'right_joint2', 'right_joint3', 'right_joint4', 'right_joint5', 'right_joint6', 'right_joint7'];
        joint_state.position = [];
        joint_state.velocity = [];
        joint_state.effort = [];
    }
    return 0;
}
