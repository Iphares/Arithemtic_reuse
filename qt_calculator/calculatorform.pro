HEADERS     = calculatorform.h \
              assign1/converstions.h \
              assign1/math.h \
              assign1/mathTemplate.h

FORMS       = calculatorform.ui

SOURCES     = calculatorform.cpp \
              main.cpp \
              assign1/math.cpp \

QT += widgets

target.path = $$[QT_INSTALL_EXAMPLES]/designer/calculatorform
INSTALLS += target
