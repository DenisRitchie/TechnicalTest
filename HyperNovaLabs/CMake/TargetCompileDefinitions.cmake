
target_compile_definitions(${PROJECT_NAME}
  PRIVATE -D_DEBUG
  PRIVATE -DNS_BUILD
  PRIVATE -DNS_CONFIG=Debug
  PRIVATE -DNS_VERSION=3.0.12
  PRIVATE -DNS_APP_FRAMEWORK
  PRIVATE -DNS_LICENSE
  PRIVATE -DNS_STATIC_LIBRARY
  PRIVATE -DNS_DEBUG
  PRIVATE -DNS_PROFILE
  PRIVATE -DNS_MINIMUM_LOG_LEVEL=1
)
