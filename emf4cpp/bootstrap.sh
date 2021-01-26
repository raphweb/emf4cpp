#!/bin/sh

mv ../org.csu.emf4cpp.generator/src/metamodel/Ecore.ecore ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore

java -jar ../org.csu.emf4cpp.generator/org.csu.emf4cpp.generator_2.0.0.jar -o . \
    --internal --bootstrap \
    ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore

mv ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore ../org.csu.emf4cpp.generator/src/metamodel/Ecore.ecore
