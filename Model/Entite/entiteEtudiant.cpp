#include <vcl.h>
#include <stdexcept> // exception
#pragma hdrstop

#include "entiteEtudiant.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
//------------------------------------------
void Etudiant::setId(int id)
{
    this->id = id;
}
//------------------------------------------
int Etudiant::getId()
{
    return id;
}
//------------------------------------------
void Etudiant::setNom(String nom)
{
    // Supprimer les espaces superflus
    nom = nom.Trim();
    this->nom = nom;
}
//------------------------------------------
String Etudiant::getNom()
{
    return nom;
}
//------------------------------------------
void Etudiant::setMoyenne(float moyenne) {
    this->moyenne = moyenne;
}
//------------------------------------------
float Etudiant::getMoyenne() {
    return moyenne;
}
//------------------------------------------
void Etudiant::setMention(String mention) {
        this->mention = mention;
}
//------------------------------------------
String Etudiant::getMention() {
        return mention;
}

String Etudiant::attribuerMention()
{
    if (moyenne >= 16.0f)
    {
        mention = "Tr�s bien";
    }
    else if (moyenne >= 14.0f)
    {
        mention = "Bien";
    }
    else if (moyenne >= 12.0f)
    {
        mention = "Assez bien";
    }
    else if (moyenne >= 10.0f)
    {
        mention = "Passable";
    }
    else
    {
        mention = "Pas de mention";
    }


    return mention; 
}

