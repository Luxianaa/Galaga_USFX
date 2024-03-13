// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float cantidadArmamento;
	float tipoArmamento;
	float tiempoAparicion;
	float agilidad;//que tan rapido puede moverse por el escenario

protected:
	//float recompensa; // que dropea al ser destruida
	float tipoMovimiento; // si se mueve en zigzag, linea recta,e4tc
	float puntosVida; //cantidad de dano que puede recibir nates de ser destruida
	float cantidadVida;

public: //accesory methods 
	FORCEINLINE float GetCantidadArmamento() const { return cantidadArmamento; }
	FORCEINLINE float GetTipoArmamento() const { return tipoArmamento; }
	FORCEINLINE float GetTiempoAparicion() const { return tiempoAparicion; }
	FORCEINLINE float GetAgilidad() const { return agilidad; }
	FORCEINLINE float GetTipoMovimiento() const { return tipoMovimiento; }
	FORCEINLINE float GetPuntosVida() const { return puntosVida; }
	FORCEINLINE float GetCantidadVida() const { return cantidadVida; }

	//set
	FORCEINLINE void SetCantidadArmamento(float _cantidadArmamento) { cantidadArmamento = _cantidadArmamento; }
	FORCEINLINE void SetTipoArmamento(float _tipoArmamento) { tipoArmamento = _tipoArmamento; }
	FORCEINLINE void SetTiempoAparicion(float _tiempoAparicion) { tiempoAparicion = _tiempoAparicion; }
	FORCEINLINE void SetAgilidad(float _agilidad) { agilidad = _agilidad; }
	FORCEINLINE void SetTipoMovimiento(float _tipoMovimiento) { tipoMovimiento = _tipoMovimiento; }
	FORCEINLINE void SetPuntosVida(float _puntosVida) { puntosVida = _puntosVida; }
	FORCEINLINE void SetCantidadVida(float _cantidadVida) { cantidadVida = _cantidadVida; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemigaCaza();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);

};
