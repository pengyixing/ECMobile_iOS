/*
 *                                                                          
 *       _/_/_/                      _/        _/_/_/_/_/                     
 *    _/          _/_/      _/_/    _/  _/          _/      _/_/      _/_/    
 *   _/  _/_/  _/_/_/_/  _/_/_/_/  _/_/          _/      _/    _/  _/    _/   
 *  _/    _/  _/        _/        _/  _/      _/        _/    _/  _/    _/    
 *   _/_/_/    _/_/_/    _/_/_/  _/    _/  _/_/_/_/_/    _/_/      _/_/       
 *                                                                          
 *
 *  Copyright 2013-2014, Geek Zoo Studio
 *  http://www.ecmobile.cn/license.html
 *
 *  HQ China:
 *    2319 Est.Tower Van Palace 
 *    No.2 Guandongdian South Street 
 *    Beijing , China
 *
 *  U.S. Office:
 *    One Park Place, Elmira College, NY, 14901, USA
 *
 *  QQ Group:   329673575
 *  BBS:        bbs.ecmobile.cn
 *  Fax:        +86-10-6561-5510
 *  Mail:       info@geek-zoo.com
 */

#import "Bee.h"
#import "ecmobile.h"
#import "BaseModel.h"

#pragma mark -

@interface ValidateModel : SinglePageModel

@property (nonatomic, retain) NSString * bonus;
@property (nonatomic, retain) NSNumber * integral;

@property (nonatomic, retain) NSNumber * data_bonus;
@property (nonatomic, retain) NSString * data_bonus_formated;

@property (nonatomic, retain) NSNumber * data_integral;
@property (nonatomic, retain) NSString * data_integral_formated;

- (void)validateBonus;
- (void)validateIntegral;

@end
