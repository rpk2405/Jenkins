pipeline {
    agent any
    environment
    {
        UV4="C:\\Users\\Raghu\\AppData\\Local\\Keil_v5\\UV4\\UV4.exe"
        PROJ="%WORKSPACE%\\Sample_Project.uvprojx"
        BUILD_LOG="%WORKSPACE%\\Build_log.log"
    }
    stages {
        stage('Check Variables') {
            steps {
                bat '''
                echo %UV4%
                echo %PROJ%
                '''
            }
        }
        stage('Build Software')
        {
            steps
            {
                bat '''

                    if exist %BUILD_LOG% del %BUILD_LOG%
                    
                    echo 'Cleaning Project
                    %UV4% -c %PROJ%

                    echo 'Building Project'
                    %UV4% -b %PROJ% -o %BUILD_LOG%

                    echo 'Keil Error Code: %ERRORLEVEL%
                    
                '''
            }
            post
            {
                success
                {
                    echo 'Build Successful'
                }
            }
        }
    }
}
