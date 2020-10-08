
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <CoreMotion/CoreMotion.h>

@interface RNAttitude : RCTEventEmitter <RCTBridgeModule> {
    // all angles are in degrees
    bool inverseReferenceInUse;
    bool observing;
    long long lastSampleTime;
    long intervalMillis;
    float roll;
    float pitch;
    float yaw;
    float heading;
    float lastHeading;
    float lastRoll;
    float lastPitch;
    CMQuaternion quaternion;
    CMQuaternion inverseReferenceQuaternion;
    CMMotionManager *motionManager;
    NSOperationQueue *attitudeQueue;
}

@end

// Based on Timestamp to epoch converter in react-native-sensors
// https://github.com/react-native-sensors/react-native-sensors/blob/master/ios/Utils.h
@interface Utilities : NSObject

+ (double)sensorTimestampToEpochMilliseconds:(double) timestamp;

@end

  
