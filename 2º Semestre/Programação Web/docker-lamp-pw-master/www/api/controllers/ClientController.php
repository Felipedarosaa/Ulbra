<?php

class ClientController
{
    var $ClientModel;

    public function __construct()
    {
        require_once('models/ClientModel.php');
        $this -> ClientModel = new ClientModel();
    }

    public function listClients()
    {
        $result = $this->ClientModel->listClients();
        $arrayClients =  array();
        while ($line = $result->fetch_assoc()) {
            array_push($arrayClients, $line);
        }
        header("Content-Type: application/json");
        echo json_encode($arrayClients);
    }

    public function consultClient($idClient)
    {
        $result = $this->ClientModel->consultClient($idClient);
        if ($arrayClient = $result -> fetch_assoc()) {

            header('Content-Type: application/json');
            echo json_encode($arrayClient);
        } else {
            header('Content-Type: application/json');
            echo ('
                    {
                    "error" : "1",
                    "message" : "cliente não encontrado!"
                    }');
        }
    }


    public function insertClient()
    {
        $client = json_decode(file_get_contents("php://input"));
        $client = (array) $client;

        $idClient = $this->ClientModel->insertClient($client);
        header('Content-Type: application/json');
        echo ('
               {
               "sucess" : "1",
               "message" : "Cliente iserido!"
               }');
    }


    public function updateClient($idClient)
    {
        $client = json_decode(file_get_contents("php://input"));
        $client = (array) $client;
        $this->ClientModel->updateClient($idClient);
        header('Content-Type: application/json');
        echo ('
               {
               "sucess" : "2",
               "message" : "Cliente alterado!"
               }');
    }


    public function deleteClient($idClient)
    {
        $this->ClientModel->deleteClient($idClient);
        header('Content-Type: application/json');
        echo ('
               {
               "sucess" : "3",
               "message" : "Cliente deletado!"
               };
       ');
    }
}