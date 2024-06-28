/*
// Part of Infantry Occupy House
// by Zenophon

*/

params ["_center", "_distance", "_phi"];

([(_center select 0) + (_distance * (cos _phi)),(_center select 1) + (_distance * (sin _phi)), (_this select 3)])