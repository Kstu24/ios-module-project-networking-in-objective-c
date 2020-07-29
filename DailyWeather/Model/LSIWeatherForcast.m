//
//  LSIWeatherForcast.m
//  DailyWeather
//
//  Created by Kevin Stewart on 7/28/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "LSIWeatherForcast.h"

@implementation LSIWeatherForcast

- (instancetype)init
{
    return [self initWithTime:NSDate.now
                      summary:@""
                         icon:NSURL.class
            precipProbability:0
              precipIntensity:0
                  temperature:0
          apparentTemperature:0
                     humidity:0
                     pressure:0
                    windSpeed:0
                  windBearing:0
                      uvIndex:0];
}

- (instancetype)initWithTime:(NSDate *)time
                     summary:(NSString *)summary
                        icon:(NSURL *)icon
           precipProbability:(double)precipProbability
             precipIntensity:(double)precipIntensity
                 temperature:(double)temperature
         apparentTemperature:(double)apparentTemperature
                    humidity:(double)humidity
                    pressure:(double)pressure
                   windSpeed:(double)windSpeed
                 windBearing:(double)windBearing
                     uvIndex:(double)uvIndedx
{
    if (self = [super init]) {
        _time = time;
        _summary = summary.copy;
        _icon = icon;
        _precipProbability = precipProbability;
        _precipIntensity = precipIntensity;
        _temperature = temperature;
        _apparentTemperature = apparentTemperature;
        _humidity = humidity;
        _pressure = pressure;
        _windSpeed = windSpeed;
        _windBearing = windBearing;
        _uvIndex = uvIndedx;
    }
    return self;
}

@end
