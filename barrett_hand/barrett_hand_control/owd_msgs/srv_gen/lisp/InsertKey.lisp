; Auto-generated. Do not edit!


(cl:in-package owd_msgs-srv)


;//! \htmlinclude InsertKey-request.msg.html

(cl:defclass <InsertKey-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass InsertKey-request (<InsertKey-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InsertKey-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InsertKey-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name owd_msgs-srv:<InsertKey-request> is deprecated: use owd_msgs-srv:InsertKey-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InsertKey-request>) ostream)
  "Serializes a message object of type '<InsertKey-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InsertKey-request>) istream)
  "Deserializes a message object of type '<InsertKey-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InsertKey-request>)))
  "Returns string type for a service object of type '<InsertKey-request>"
  "owd_msgs/InsertKeyRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InsertKey-request)))
  "Returns string type for a service object of type 'InsertKey-request"
  "owd_msgs/InsertKeyRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InsertKey-request>)))
  "Returns md5sum for a message object of type '<InsertKey-request>"
  "ad2e2c70d0557970f2c1628f5539a6dd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InsertKey-request)))
  "Returns md5sum for a message object of type 'InsertKey-request"
  "ad2e2c70d0557970f2c1628f5539a6dd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InsertKey-request>)))
  "Returns full string definition for message of type '<InsertKey-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InsertKey-request)))
  "Returns full string definition for message of type 'InsertKey-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InsertKey-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InsertKey-request>))
  "Converts a ROS message object to a list"
  (cl:list 'InsertKey-request
))
;//! \htmlinclude InsertKey-response.msg.html

(cl:defclass <InsertKey-response> (roslisp-msg-protocol:ros-message)
  ((ok
    :reader ok
    :initarg :ok
    :type cl:boolean
    :initform cl:nil)
   (reason
    :reader reason
    :initarg :reason
    :type cl:string
    :initform "")
   (id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0))
)

(cl:defclass InsertKey-response (<InsertKey-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InsertKey-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InsertKey-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name owd_msgs-srv:<InsertKey-response> is deprecated: use owd_msgs-srv:InsertKey-response instead.")))

(cl:ensure-generic-function 'ok-val :lambda-list '(m))
(cl:defmethod ok-val ((m <InsertKey-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader owd_msgs-srv:ok-val is deprecated.  Use owd_msgs-srv:ok instead.")
  (ok m))

(cl:ensure-generic-function 'reason-val :lambda-list '(m))
(cl:defmethod reason-val ((m <InsertKey-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader owd_msgs-srv:reason-val is deprecated.  Use owd_msgs-srv:reason instead.")
  (reason m))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <InsertKey-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader owd_msgs-srv:id-val is deprecated.  Use owd_msgs-srv:id instead.")
  (id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InsertKey-response>) ostream)
  "Serializes a message object of type '<InsertKey-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ok) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'reason))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'reason))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InsertKey-response>) istream)
  "Deserializes a message object of type '<InsertKey-response>"
    (cl:setf (cl:slot-value msg 'ok) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reason) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'reason) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'id)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InsertKey-response>)))
  "Returns string type for a service object of type '<InsertKey-response>"
  "owd_msgs/InsertKeyResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InsertKey-response)))
  "Returns string type for a service object of type 'InsertKey-response"
  "owd_msgs/InsertKeyResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InsertKey-response>)))
  "Returns md5sum for a message object of type '<InsertKey-response>"
  "ad2e2c70d0557970f2c1628f5539a6dd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InsertKey-response)))
  "Returns md5sum for a message object of type 'InsertKey-response"
  "ad2e2c70d0557970f2c1628f5539a6dd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InsertKey-response>)))
  "Returns full string definition for message of type '<InsertKey-response>"
  (cl:format cl:nil "bool ok~%string reason~%uint32 id~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InsertKey-response)))
  "Returns full string definition for message of type 'InsertKey-response"
  (cl:format cl:nil "bool ok~%string reason~%uint32 id~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InsertKey-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'reason))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InsertKey-response>))
  "Converts a ROS message object to a list"
  (cl:list 'InsertKey-response
    (cl:cons ':ok (ok msg))
    (cl:cons ':reason (reason msg))
    (cl:cons ':id (id msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'InsertKey)))
  'InsertKey-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'InsertKey)))
  'InsertKey-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InsertKey)))
  "Returns string type for a service object of type '<InsertKey>"
  "owd_msgs/InsertKey")