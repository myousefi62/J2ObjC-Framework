//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Exception.java
//

#ifndef _JavaLangException_H_
#define _JavaLangException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Throwable.h>

/*!
 @brief <code>Exception</code> is the superclass of all classes that represent recoverable
 exceptions.
 When exceptions are thrown, they may be caught by application
 code.
 */
@interface JavaLangException : JavaLangThrowable

#pragma mark Public

/*!
 @brief Constructs a new <code>Exception</code> that includes the current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace and the
 specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace, the
 specified detail message and the specified cause.
 @param detailMessage
 the detail message for this exception.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace and the
 specified cause.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace,
 the specified detail message, the specified cause, and whether suppression
 and/or writable stack trace is enabled.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangException)

FOUNDATION_EXPORT void JavaLangException_init(JavaLangException *self);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_(JavaLangException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withJavaLangThrowable_(JavaLangException *self, NSString *detailMessage, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithJavaLangThrowable_(JavaLangException *self, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithJavaLangThrowable_(JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(JavaLangException *self, NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangException)

#endif // _JavaLangException_H_