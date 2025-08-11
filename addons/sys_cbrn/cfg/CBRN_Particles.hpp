//https://community.bistudio.com/wiki/Arma_3:_Particle_Effects

class ComplexEffect
{
	class GasCloud
	{
		simulation = "particles";	// type of simulation - particles or light
		type = "DefaultSmoke";			// name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
		position[] = {0, 0, 0};		// position related to the default position or memorypoint
		//lifeTime = 0.05;			// life time of emitter

		qualityLevel = -1;			// effect is only used when the the particle quality option [[particlesQuality]] in user settings matches this qualityLevel.
									// -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1

		//start = 1;					// is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
		enabled = 1;				// 1 effect is enabled, -1 effect is disabled
	};
};

class CfgCloudlets
{
    class WPCloud;
    class MSFGas : WPCloud
    {
        interval = "0.5 * speedSize + 0.5";	// interval of particle's creation
        circleRadius = 0;					// radius around emitter where particles are created
        circleVelocity[] = {0, 0, 0};		// direction and speed of movement of particle's circle

        //particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";	// path and name of file
        particleFSNtieth = 16;				// How many rows there are in the texture. For example Universal is 16x16, so particleFSNtieth is 16. Default: 1
        particleFSIndex = 12;				// Row index 0 based, so particleFSIndex 12 will mean 13th row from the top. Default: 0
        particleFSFrameCount = 13;			// How many frames from the start of the chosen row to animate (particleFSFrameCount 8 means animate frames 1,2,3,4,5,6 and 7 in sequence). Default: 1
        particleFSLoop = 0;					// Whether or not to repeat from the beginning when all frames got played (0 - false, 1 - true). If particleFSLoop is 0 animation sequence is played only once. Default: 1
        animationSpeed[] = {1000};			// interpolated speed of animation in animation cycles per second.
                                            // e.g if particleFSFrameCount is 8 and animationSpeed at the time is 0.4 result in 8 * 0.5 = 4 frame changes per second.
                                            // Value 1000 is a special value but only when combined with particleFSLoop 0;
                                            // this will instruct the engine to play only the last frame of the given count, so if particleFSFrameCount is 5, animationSpeed[] is {1000} and particleFSLoop is 0 only 5th frame will be played.

        angle = 0;							// angle of particle
        angleVar = 1;						// variability in angle of particle
        animationName = "";
        particleType = "Billboard";			// type of animation (Billboard (2D), Spaceobject (3D))
        timerPeriod = 1;					// interval of timer (how often is called script defined in parameter onTimerScript)
        lifeTime = 12;						// life time of particle in seconds
        moveVelocity[] = {0, 0, 0};			// direction and speed of movement of particle [x,z,y]
        rotationVelocity = 20;				// direction and speed of rotation of particle [x,z,y]
        weight = 0.1;							// weight of particle (kg)
        volume = 1;							// volume of particle (m3)
        rubbing = 0.1;						// how much is particle affected by wind/air resistance
        size[] = {5,10,13,16,18,20,21,22};	// size of particle during the life
        color[] = {{1,1,1,1},{1,1,1,0}};
        //color[] = {{0.6,0.6,0.1,1},{0.6,0.6,0.1,0}};	// color of particle during the life (r,g,b,a)
        randomDirectionPeriod = 1;			// interval of random speed change
        randomDirectionIntensity = 0;		// intensity of random speed change
        onTimerScript = "";					// script triggered by timer (in variable "this" is stored position of particle)
        beforeDestroyScript = "";			// script triggered before destroying of particle (in variable "this" is stored position of particle)
        lifeTimeVar = 4;					// variability in lifetime of particle
        position[] = {0, 0, 0};				// defines position of effect
        positionVar[] = {4,3,4};			// variability in position of particle (each part of vector has it is own variability)
        positionVarConst[] = {0, 0, 0};		// variability in position of particle (variablity of all parts of vector is the same)
        moveVelocityVar[] = {0.2, 0.2, 0.2};		// variability in direction and speed of particle (each part of vector has it is own variability)
        moveVelocityVarConst[] = {0, 0, 0};	// variability in direction and speed of particle (variablity of all parts of vector is the same)
        rotationVelocityVar = 20;			// variability in rotation of particle
        sizeVar = 0.3;						// variability in size of particle
        colorVar[] = {0, 0, 0, 0};			// variability in color of particle
        randomDirectionPeriodVar = 0;		// variability in interval of random speed change
        randomDirectionIntensityVar = 0;	// variability in intensity of random speed change
        sizeCoef = 1;						// size of particle = size parameter value * this coef (works only in some effects)
        colorCoef[]={1,1,1,1};				// color of particle = color parameter value * this coef (works only in some effects)
        animationSpeedCoef = 1;				// animation speed of particle = animationSpeed parameter value * this coef (works only in some effects)

        //destroyOnWaterSurface = 1;			// particle can exist - only underwater (-1), only above the water (1), everywhere (0)
        //destroyOnWaterSurfaceOffset = 0;	// offset of water surface in destroyOnWaterSurface parameter
        //destroyAfterCrossing = "false";		// if true, destroy when the whole particle is on the other side of the water surface. Only when _destroyOnWaterSurfaceOffset is enabled, 
        //onSurface = true;					// placing of particle on (water) surface on start of it is existence, default value is true, works only if circleRadius > 0
        //keepOnSurface = false;				// true for particle is stay on water surface - see notes below
        //surfaceOffset = 0;					// offset of water surface in keepOnSurface parameter
        //bounceOnSurface = 0.6;				// coef of speed's loosing in collision with ground, 0-1 for collisions, -1 disable collision
        //bounceOnSurfaceVar = 0.0;			// variability in speed's loosing in collision with ground
        //postEffects = "IEDMineFlame";				// effect triggered before destroying of particle
        //particleEffects = "ExplosionShardsFire";	// emitter of effect defined in this parameter is attached to each particle
        //ignoreWind = false;							// if true, wind will not be applied on the particle 
        //blockAIVisibility = true;					// sets if particles are in the AI visibility tests (default true) - false for better performance but AI is able to see through particles
        //emissiveColor[] = {{30,30,30,0},{0,0,0,0}};	// sets emissivity of particle, 4th number has no meaning for now

    };
};
