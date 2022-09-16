void JointConfigurator::storeProtectedParametersToJointB() {

  if (!ProtectedParameterRead) {
    std::cout << "The protected Joint Parameters have to been read before hand!" << std::endl;
    return;
  }
  try {

//    std::cout << "Storing parameters for Joint: " << jointName << std::endl;

    if (!AreSame(MaximumMotorCurrent_actual.value(), MaximumMotorCurrent_file.value())) {
      MaximumMotorCurrent_Parameter.setParameter(MaximumMotorCurrent_file);
      joint->setConfigurationParameter(MaximumMotorCurrent_Parameter);
//      std::cout << "MaximumMotorCurrent set to: " << MaximumMotorCurrent_file << std::endl;
    }

//    std::cout << "Protected Parameters stored for Joint: " << jointName << std::endl << std::endl;

  } catch (JointParameterException& e) {

  }
}