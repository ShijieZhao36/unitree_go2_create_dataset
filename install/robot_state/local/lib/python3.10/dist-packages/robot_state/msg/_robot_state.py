# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_state:msg/RobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'foot_force'
# Member 'motor_q'
# Member 'motor_dq'
# Member 'motor_ddq'
# Member 'motor_tau_est'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotState(type):
    """Metaclass of message 'RobotState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_state')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_state.msg.RobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotState(metaclass=Metaclass_RobotState):
    """Message class 'RobotState'."""

    __slots__ = [
        '_foot_force',
        '_motor_q',
        '_motor_dq',
        '_motor_ddq',
        '_motor_tau_est',
    ]

    _fields_and_field_types = {
        'foot_force': 'int16[4]',
        'motor_q': 'float[12]',
        'motor_dq': 'float[12]',
        'motor_ddq': 'float[12]',
        'motor_tau_est': 'float[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'foot_force' not in kwargs:
            self.foot_force = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.foot_force = numpy.array(kwargs.get('foot_force'), dtype=numpy.int16)
            assert self.foot_force.shape == (4, )
        if 'motor_q' not in kwargs:
            self.motor_q = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.motor_q = numpy.array(kwargs.get('motor_q'), dtype=numpy.float32)
            assert self.motor_q.shape == (12, )
        if 'motor_dq' not in kwargs:
            self.motor_dq = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.motor_dq = numpy.array(kwargs.get('motor_dq'), dtype=numpy.float32)
            assert self.motor_dq.shape == (12, )
        if 'motor_ddq' not in kwargs:
            self.motor_ddq = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.motor_ddq = numpy.array(kwargs.get('motor_ddq'), dtype=numpy.float32)
            assert self.motor_ddq.shape == (12, )
        if 'motor_tau_est' not in kwargs:
            self.motor_tau_est = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.motor_tau_est = numpy.array(kwargs.get('motor_tau_est'), dtype=numpy.float32)
            assert self.motor_tau_est.shape == (12, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.foot_force != other.foot_force):
            return False
        if all(self.motor_q != other.motor_q):
            return False
        if all(self.motor_dq != other.motor_dq):
            return False
        if all(self.motor_ddq != other.motor_ddq):
            return False
        if all(self.motor_tau_est != other.motor_tau_est):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def foot_force(self):
        """Message field 'foot_force'."""
        return self._foot_force

    @foot_force.setter
    def foot_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'foot_force' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'foot_force' numpy.ndarray() must have a size of 4"
            self._foot_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'foot_force' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._foot_force = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def motor_q(self):
        """Message field 'motor_q'."""
        return self._motor_q

    @motor_q.setter
    def motor_q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'motor_q' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'motor_q' numpy.ndarray() must have a size of 12"
            self._motor_q = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'motor_q' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def motor_dq(self):
        """Message field 'motor_dq'."""
        return self._motor_dq

    @motor_dq.setter
    def motor_dq(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'motor_dq' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'motor_dq' numpy.ndarray() must have a size of 12"
            self._motor_dq = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'motor_dq' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_dq = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def motor_ddq(self):
        """Message field 'motor_ddq'."""
        return self._motor_ddq

    @motor_ddq.setter
    def motor_ddq(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'motor_ddq' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'motor_ddq' numpy.ndarray() must have a size of 12"
            self._motor_ddq = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'motor_ddq' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_ddq = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def motor_tau_est(self):
        """Message field 'motor_tau_est'."""
        return self._motor_tau_est

    @motor_tau_est.setter
    def motor_tau_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'motor_tau_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'motor_tau_est' numpy.ndarray() must have a size of 12"
            self._motor_tau_est = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'motor_tau_est' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._motor_tau_est = numpy.array(value, dtype=numpy.float32)
