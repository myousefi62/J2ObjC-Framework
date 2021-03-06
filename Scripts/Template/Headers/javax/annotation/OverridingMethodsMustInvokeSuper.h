//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/OverridingMethodsMustInvokeSuper.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper")
#ifdef RESTRICT_JavaxAnnotationOverridingMethodsMustInvokeSuper
#define INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper 0
#else
#define INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper 1
#endif
#undef RESTRICT_JavaxAnnotationOverridingMethodsMustInvokeSuper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationOverridingMethodsMustInvokeSuper_) && (INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper || defined(INCLUDE_JavaxAnnotationOverridingMethodsMustInvokeSuper))
#define JavaxAnnotationOverridingMethodsMustInvokeSuper_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief When this annotation is applied to a method, it indicates that if this method
 is overridden in a subclass, the overriding method should invoke this method
 (through method invocation on super).
 */
@protocol JavaxAnnotationOverridingMethodsMustInvokeSuper < JavaLangAnnotationAnnotation >

@end

@interface JavaxAnnotationOverridingMethodsMustInvokeSuper : NSObject < JavaxAnnotationOverridingMethodsMustInvokeSuper >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationOverridingMethodsMustInvokeSuper)

FOUNDATION_EXPORT id<JavaxAnnotationOverridingMethodsMustInvokeSuper> create_JavaxAnnotationOverridingMethodsMustInvokeSuper();

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationOverridingMethodsMustInvokeSuper)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationOverridingMethodsMustInvokeSuper")
