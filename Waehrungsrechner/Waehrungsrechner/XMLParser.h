//
//  XMLReader.h
//  Waehrungsrechner
//
//  Created by Labor on 22.11.21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// https://www.sitepoint.com/parsing-xml-files-with-objective-c/

@class CurrencyEntity;

// Wrapper Klasse für NSXMLParser um aus der KursExport.xml die unterschiedlichen Währungen
// zu extrahieren. Eine Währung wird von einem Currency Instanz repräsentiert. Wurde die
// XML-Datei erfolgreich geparst können alle Währungsobjekte aus dem Array currencyEntities
// abgefragt werden.
@interface XMLParser : NSObject<NSXMLParserDelegate>
{
    CurrencyEntity* currency;
    NSMutableString* currentElement;
    NSMutableArray* currencyEntities;
    NSXMLParser* parser;
    NSNumberFormatter* numberFormatter;
    NSDateFormatter* dateFormatter;
}

@property (nonatomic, strong) NSMutableArray* currencyEntities;

-(id)initXMLParserWithPath:(NSString*)_path;

@end

NS_ASSUME_NONNULL_END
