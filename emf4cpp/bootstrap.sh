#!/bin/sh

mv ../org.csu.emf4cpp.generator/src/metamodel/Ecore.ecore ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore

../org.csu.emf4cpp.generator/emf4cpp.generator.sh \
    --internal --bootstrap \
    ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore

mv ../org.csu.emf4cpp.generator/src/metamodel/emf4cpp.ecore ../org.csu.emf4cpp.generator/src/metamodel/Ecore.ecore
