// Auto-generated. Do not edit!

// (in-package tm_motion.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ActionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.goal_goal = null;
    }
    else {
      if (initObj.hasOwnProperty('goal_goal')) {
        this.goal_goal = initObj.goal_goal
      }
      else {
        this.goal_goal = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ActionGoal
    // Serialize message field [goal_goal]
    bufferOffset = _serializer.string(obj.goal_goal, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ActionGoal
    let len;
    let data = new ActionGoal(null);
    // Deserialize message field [goal_goal]
    data.goal_goal = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.goal_goal.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'tm_motion/ActionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db36ba6c2d7075135f6f5a5977ce9d12';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Goal
    string goal_goal
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ActionGoal(null);
    if (msg.goal_goal !== undefined) {
      resolved.goal_goal = msg.goal_goal;
    }
    else {
      resolved.goal_goal = ''
    }

    return resolved;
    }
};

module.exports = ActionGoal;
