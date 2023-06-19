install(
    TARGETS Chess_exe
    RUNTIME COMPONENT Chess_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
