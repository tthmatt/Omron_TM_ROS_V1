;; Auto-generated. Do not edit!


(when (boundp 'tm_motion::ActionGoal)
  (if (not (find-package "TM_MOTION"))
    (make-package "TM_MOTION"))
  (shadow 'ActionGoal (find-package "TM_MOTION")))
(unless (find-package "TM_MOTION::ACTIONGOAL")
  (make-package "TM_MOTION::ACTIONGOAL"))

(in-package "ROS")
;;//! \htmlinclude ActionGoal.msg.html


(defclass tm_motion::ActionGoal
  :super ros::object
  :slots (_goal_function _goal_param _goal_goal1 _goal_goal2 _goal_goal3 _goal_goal4 _goal_goal5 _goal_goal6 ))

(defmethod tm_motion::ActionGoal
  (:init
   (&key
    ((:goal_function __goal_function) "")
    ((:goal_param __goal_param) "")
    ((:goal_goal1 __goal_goal1) "")
    ((:goal_goal2 __goal_goal2) "")
    ((:goal_goal3 __goal_goal3) "")
    ((:goal_goal4 __goal_goal4) "")
    ((:goal_goal5 __goal_goal5) "")
    ((:goal_goal6 __goal_goal6) "")
    )
   (send-super :init)
   (setq _goal_function (string __goal_function))
   (setq _goal_param (string __goal_param))
   (setq _goal_goal1 (string __goal_goal1))
   (setq _goal_goal2 (string __goal_goal2))
   (setq _goal_goal3 (string __goal_goal3))
   (setq _goal_goal4 (string __goal_goal4))
   (setq _goal_goal5 (string __goal_goal5))
   (setq _goal_goal6 (string __goal_goal6))
   self)
  (:goal_function
   (&optional __goal_function)
   (if __goal_function (setq _goal_function __goal_function)) _goal_function)
  (:goal_param
   (&optional __goal_param)
   (if __goal_param (setq _goal_param __goal_param)) _goal_param)
  (:goal_goal1
   (&optional __goal_goal1)
   (if __goal_goal1 (setq _goal_goal1 __goal_goal1)) _goal_goal1)
  (:goal_goal2
   (&optional __goal_goal2)
   (if __goal_goal2 (setq _goal_goal2 __goal_goal2)) _goal_goal2)
  (:goal_goal3
   (&optional __goal_goal3)
   (if __goal_goal3 (setq _goal_goal3 __goal_goal3)) _goal_goal3)
  (:goal_goal4
   (&optional __goal_goal4)
   (if __goal_goal4 (setq _goal_goal4 __goal_goal4)) _goal_goal4)
  (:goal_goal5
   (&optional __goal_goal5)
   (if __goal_goal5 (setq _goal_goal5 __goal_goal5)) _goal_goal5)
  (:goal_goal6
   (&optional __goal_goal6)
   (if __goal_goal6 (setq _goal_goal6 __goal_goal6)) _goal_goal6)
  (:serialization-length
   ()
   (+
    ;; string _goal_function
    4 (length _goal_function)
    ;; string _goal_param
    4 (length _goal_param)
    ;; string _goal_goal1
    4 (length _goal_goal1)
    ;; string _goal_goal2
    4 (length _goal_goal2)
    ;; string _goal_goal3
    4 (length _goal_goal3)
    ;; string _goal_goal4
    4 (length _goal_goal4)
    ;; string _goal_goal5
    4 (length _goal_goal5)
    ;; string _goal_goal6
    4 (length _goal_goal6)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _goal_function
       (write-long (length _goal_function) s) (princ _goal_function s)
     ;; string _goal_param
       (write-long (length _goal_param) s) (princ _goal_param s)
     ;; string _goal_goal1
       (write-long (length _goal_goal1) s) (princ _goal_goal1 s)
     ;; string _goal_goal2
       (write-long (length _goal_goal2) s) (princ _goal_goal2 s)
     ;; string _goal_goal3
       (write-long (length _goal_goal3) s) (princ _goal_goal3 s)
     ;; string _goal_goal4
       (write-long (length _goal_goal4) s) (princ _goal_goal4 s)
     ;; string _goal_goal5
       (write-long (length _goal_goal5) s) (princ _goal_goal5 s)
     ;; string _goal_goal6
       (write-long (length _goal_goal6) s) (princ _goal_goal6 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _goal_function
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_function (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_param
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_param (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal1
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal1 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal2
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal2 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal3
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal3 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal4
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal4 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal5
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal5 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _goal_goal6
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goal_goal6 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get tm_motion::ActionGoal :md5sum-) "bdea93a608d7ca728e6127b539a20557")
(setf (get tm_motion::ActionGoal :datatype-) "tm_motion/ActionGoal")
(setf (get tm_motion::ActionGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Goal
string goal_function
string goal_param
string goal_goal1
string goal_goal2
string goal_goal3
string goal_goal4
string goal_goal5
string goal_goal6


")



(provide :tm_motion/ActionGoal "bdea93a608d7ca728e6127b539a20557")

