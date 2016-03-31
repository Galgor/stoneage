################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Game.cpp \
../Interface.cpp \
../Move.cpp \
../Place.cpp \
../PlaceDice.cpp \
../PlaceDiceHuntinggrounds.cpp \
../PlaceVillage.cpp \
../TextInterface.cpp \
../enums.cpp \
../start.cpp 

OBJS += \
./Game.o \
./Interface.o \
./Move.o \
./Place.o \
./PlaceDice.o \
./PlaceDiceHuntinggrounds.o \
./PlaceVillage.o \
./TextInterface.o \
./enums.o \
./start.o 

CPP_DEPS += \
./Game.d \
./Interface.d \
./Move.d \
./Place.d \
./PlaceDice.d \
./PlaceDiceHuntinggrounds.d \
./PlaceVillage.d \
./TextInterface.d \
./enums.d \
./start.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


