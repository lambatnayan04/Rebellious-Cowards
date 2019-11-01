#!/usr/bin/env python

import rospy
import roslib
import tf

from geometry_msgs.msg import PoseArray

#Defining a class
class Marker_detect():

	def __init__(self):
		rospy.init_node('marker_detection',anonymous=False) # initializing a ros node with name marker_detection

		self.whycon_marker = {}	# Declaring dictionaries
	
		rospy.Subscriber('/whycon/poses',PoseArray,self.whycon_data)	# Subscribing to topic

	# Callback for /whycon/poses
	# Please fill in the function
	def whycon_data(self,msg):

		self.whycon_marker = {0 : [round(float(msg.poses[0].position.x), 3), round(float(msg.poses[0].position.y), 3), round(float(msg.poses[0].position.z), 3)],
							1 : [round(float(msg.poses[1].position.x), 3), round(float(msg.poses[1].position.y), 3), round(float(msg.poses[1].position.z), 3)],
							2 : [round(float(msg.poses[2].position.x), 3), round(float(msg.poses[2].position.y), 3), round(float(msg.poses[2].position.z), 3)],
							3 : [round(float(msg.poses[3].position.x), 3), round(float(msg.poses[3].position.y), 3), round(float(msg.poses[3].position.z), 3)],
							4 : [round(float(msg.poses[4].position.x), 3), round(float(msg.poses[4].position.y), 3), round(float(msg.poses[4].position.z), 3)]}
# Printing the detected markers on terminal
		print(self.whycon_marker)


if __name__=="__main__":
	marker = Marker_detect()
	while not rospy.is_shutdown():
		rospy.spin()