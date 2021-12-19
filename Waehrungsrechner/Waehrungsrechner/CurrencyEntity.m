//
//  CurrencyEntity.m
//  Waehrungsrechner
//
//  Created by Labor on 22.11.21.
//

#import "CurrencyEntity.h"

/*
 <kurs id="242505">
 <land>Australien</land>
 <iso2>AU</iso2>
 <kurswert>1,5528</kurswert>
 <iso3>AUD</iso3>
 <startdatum>01.11.2021</startdatum>
 <enddatum>30.11.2021</enddatum>
 </kurs>
 */

@implementation CurrencyEntity

@synthesize kursID, land, kurswert, laenderCode, startDatum, endDatum;

@end
