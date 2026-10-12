pipeline {
    agent any
    environment
    {
        UV4="C:\\Users\\Raghu\\AppData\\Local\\Keil_v5\\UV4\\UV4.exe"
        PROJ="Sample_Project.uvprojx"
        BUILD_LOG="Build_log.log"
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

                    if exist %WORKSPACE%\\%BUILD_LOG% del %WORKSPACE%\\%BUILD_LOG%

                    echo 'Cleaning Project
                    %UV4% -c %WORKSPACE%\\%PROJ%

                    echo 'Building Project'
                    %UV4% -b %WORKSPACE%\\%PROJ% -o %WORKSPACE%\\%BUILD_LOG%

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
