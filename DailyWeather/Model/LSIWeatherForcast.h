//
//  LSIWeatherForcast.h
//  DailyWeather
//
//  Created by Kevin Stewart on 7/28/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIWeatherForcast : NSObject

- (instancetype)initWithTime:(NSDate *)time
                     summary:(NSString *)summary
                        icon:(NSURL *)icon
           precipProbability:(double)precipProbability
             precipIntensity:(double)precipIntensity
                 temperature:(double)temperature
         apparentTemperature:(double)apparentTemperature // feels like
                    humidity:(double)humidity
                    pressure:(double)pressure
                   windSpeed:(double)windSpeed
                 windBearing:(double)windBearing
                     uvIndex:(double)uvIndedx NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly)NSDate *time;
@property (nonatomic, readonly, copy)NSString *summary;
@property (nonatomic, readonly)NSURL *icon;
@property (nonatomic, readonly)double precipProbability;
@property (nonatomic, readonly)double precipIntensity;
@property (nonatomic, readonly)double temperature;
@property (nonatomic, readonly)double apparentTemperature; // feels like
@property (nonatomic, readonly)double humidity;
@property (nonatomic, readonly)double pressure;
@property (nonatomic, readonly)double windSpeed;
@property (nonatomic, readonly)double windBearing;
@property (nonatomic, readonly)double uvIndex;

@end

NS_ASSUME_NONNULL_END
