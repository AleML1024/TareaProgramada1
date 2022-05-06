#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada#1/src/tipoEnvio.h"

namespace
{
    TEST(testTipoEnvio, testServicioPostal)
    {
        /// AAA

        // Arrange - configurar el escenario
        TipoEnvio servicioPostal;

        // Act - ejecute la operación
        float actual = servicioPostal.servicioPostal(5, 3, 10);
        float esperada = 0.12;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

      TEST(testTipoEnvio, testFedEx)
     {
         /// AAA

         // Arrange - configurar el escenario
        TipoEnvio fedEx;

         // Act - ejecute la operación
        float actual = fedEx.fedEx(501, 15);
        float esperada = 60;

          // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
     }

     
}