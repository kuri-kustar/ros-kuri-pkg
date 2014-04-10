
(cl:in-package :asdf)

(defsystem "owd_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :owd_msgs-msg
)
  :components ((:file "_package")
    (:file "GetSpeed" :depends-on ("_package_GetSpeed"))
    (:file "_package_GetSpeed" :depends-on ("_package"))
    (:file "SetSpeed" :depends-on ("_package_SetSpeed"))
    (:file "_package_SetSpeed" :depends-on ("_package"))
    (:file "SetStallSensitivity" :depends-on ("_package_SetStallSensitivity"))
    (:file "_package_SetStallSensitivity" :depends-on ("_package"))
    (:file "PauseTrajectory" :depends-on ("_package_PauseTrajectory"))
    (:file "_package_PauseTrajectory" :depends-on ("_package"))
    (:file "SetHandTorque" :depends-on ("_package_SetHandTorque"))
    (:file "_package_SetHandTorque" :depends-on ("_package"))
    (:file "StopForce" :depends-on ("_package_StopForce"))
    (:file "_package_StopForce" :depends-on ("_package"))
    (:file "SetTorqueLimits" :depends-on ("_package_SetTorqueLimits"))
    (:file "_package_SetTorqueLimits" :depends-on ("_package"))
    (:file "Reset" :depends-on ("_package_Reset"))
    (:file "_package_Reset" :depends-on ("_package"))
    (:file "ApplyEEForceTorque" :depends-on ("_package_ApplyEEForceTorque"))
    (:file "_package_ApplyEEForceTorque" :depends-on ("_package"))
    (:file "SetForceInputThreshold" :depends-on ("_package_SetForceInputThreshold"))
    (:file "_package_SetForceInputThreshold" :depends-on ("_package"))
    (:file "SetFingerCompliant" :depends-on ("_package_SetFingerCompliant"))
    (:file "_package_SetFingerCompliant" :depends-on ("_package"))
    (:file "StartTeleop" :depends-on ("_package_StartTeleop"))
    (:file "_package_StartTeleop" :depends-on ("_package"))
    (:file "SetStiffness" :depends-on ("_package_SetStiffness"))
    (:file "_package_SetStiffness" :depends-on ("_package"))
    (:file "GetStallSensitivity" :depends-on ("_package_GetStallSensitivity"))
    (:file "_package_GetStallSensitivity" :depends-on ("_package"))
    (:file "DeleteTrajectory" :depends-on ("_package_DeleteTrajectory"))
    (:file "_package_DeleteTrajectory" :depends-on ("_package"))
    (:file "ResetFinger" :depends-on ("_package_ResetFinger"))
    (:file "_package_ResetFinger" :depends-on ("_package"))
    (:file "SetJointStiffness" :depends-on ("_package_SetJointStiffness"))
    (:file "_package_SetJointStiffness" :depends-on ("_package"))
    (:file "StartMoveDirection" :depends-on ("_package_StartMoveDirection"))
    (:file "_package_StartMoveDirection" :depends-on ("_package"))
    (:file "ReplaceTrajectory" :depends-on ("_package_ReplaceTrajectory"))
    (:file "_package_ReplaceTrajectory" :depends-on ("_package"))
    (:file "GetStiffness" :depends-on ("_package_GetStiffness"))
    (:file "_package_GetStiffness" :depends-on ("_package"))
    (:file "StartHelixTraj" :depends-on ("_package_StartHelixTraj"))
    (:file "_package_StartHelixTraj" :depends-on ("_package"))
    (:file "SetJointOffsets" :depends-on ("_package_SetJointOffsets"))
    (:file "_package_SetJointOffsets" :depends-on ("_package"))
    (:file "GetHandProperty" :depends-on ("_package_GetHandProperty"))
    (:file "_package_GetHandProperty" :depends-on ("_package"))
    (:file "InsertKey" :depends-on ("_package_InsertKey"))
    (:file "_package_InsertKey" :depends-on ("_package"))
    (:file "GetDOF" :depends-on ("_package_GetDOF"))
    (:file "_package_GetDOF" :depends-on ("_package"))
    (:file "AddTimedTrajectory" :depends-on ("_package_AddTimedTrajectory"))
    (:file "_package_AddTimedTrajectory" :depends-on ("_package"))
    (:file "SetTactileInputThreshold" :depends-on ("_package_SetTactileInputThreshold"))
    (:file "_package_SetTactileInputThreshold" :depends-on ("_package"))
    (:file "StopMoveDirection" :depends-on ("_package_StopMoveDirection"))
    (:file "_package_StopMoveDirection" :depends-on ("_package"))
    (:file "CancelAllTrajectories" :depends-on ("_package_CancelAllTrajectories"))
    (:file "_package_CancelAllTrajectories" :depends-on ("_package"))
    (:file "StepJoint" :depends-on ("_package_StepJoint"))
    (:file "_package_StepJoint" :depends-on ("_package"))
    (:file "CalibrateJoints" :depends-on ("_package_CalibrateJoints"))
    (:file "_package_CalibrateJoints" :depends-on ("_package"))
    (:file "AddTrajectory" :depends-on ("_package_AddTrajectory"))
    (:file "_package_AddTrajectory" :depends-on ("_package"))
    (:file "ApplyForce" :depends-on ("_package_ApplyForce"))
    (:file "_package_ApplyForce" :depends-on ("_package"))
    (:file "WamRequestSeaCtrlKp" :depends-on ("_package_WamRequestSeaCtrlKp"))
    (:file "_package_WamRequestSeaCtrlKp" :depends-on ("_package"))
    (:file "RelaxHand" :depends-on ("_package_RelaxHand"))
    (:file "_package_RelaxHand" :depends-on ("_package"))
    (:file "ResetHand" :depends-on ("_package_ResetHand"))
    (:file "_package_ResetHand" :depends-on ("_package"))
    (:file "StopHelixTraj" :depends-on ("_package_StopHelixTraj"))
    (:file "_package_StopHelixTraj" :depends-on ("_package"))
    (:file "SetController" :depends-on ("_package_SetController"))
    (:file "_package_SetController" :depends-on ("_package"))
    (:file "SetHandProperty" :depends-on ("_package_SetHandProperty"))
    (:file "_package_SetHandProperty" :depends-on ("_package"))
    (:file "WamRequestSeaCtrlKd" :depends-on ("_package_WamRequestSeaCtrlKd"))
    (:file "_package_WamRequestSeaCtrlKd" :depends-on ("_package"))
    (:file "WamRequestSeaCtrlKi" :depends-on ("_package_WamRequestSeaCtrlKi"))
    (:file "_package_WamRequestSeaCtrlKi" :depends-on ("_package"))
    (:file "WamRequestSeaCtrlTorqLimit" :depends-on ("_package_WamRequestSeaCtrlTorqLimit"))
    (:file "_package_WamRequestSeaCtrlTorqLimit" :depends-on ("_package"))
    (:file "SetGains" :depends-on ("_package_SetGains"))
    (:file "_package_SetGains" :depends-on ("_package"))
    (:file "SetExtraMass" :depends-on ("_package_SetExtraMass"))
    (:file "_package_SetExtraMass" :depends-on ("_package"))
    (:file "MoveHand" :depends-on ("_package_MoveHand"))
    (:file "_package_MoveHand" :depends-on ("_package"))
    (:file "OpenDoor" :depends-on ("_package_OpenDoor"))
    (:file "_package_OpenDoor" :depends-on ("_package"))
    (:file "AddWSTraj" :depends-on ("_package_AddWSTraj"))
    (:file "_package_AddWSTraj" :depends-on ("_package"))
  ))