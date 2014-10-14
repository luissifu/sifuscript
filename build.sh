#!/bin/bash

cd source
bison -d gramatica.yy
flex tokens.ll
cd ..
make sifuc
